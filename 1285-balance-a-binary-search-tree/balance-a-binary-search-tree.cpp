/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int> ans;
public:
    TreeNode* balanceBST(TreeNode* root) {
        inorderBST(root);
        return solve(ans,0,ans.size()-1);
    }
    void inorderBST(TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }
        inorderBST(root->left);
        ans.push_back(root->val);
        inorderBST(root->right);
    }
    TreeNode* solve(vector<int>& ans,int l,int r)
    {
        if(l>r)
        {
            return nullptr;
        }
        int mid=(l+r)/2;
        TreeNode* node=new TreeNode(ans[mid]);
        node->left= solve(ans,l,mid-1);
        node->right= solve(ans,mid+1,r);
        return node;
    }
};