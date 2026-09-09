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
public:
    void inorder(TreeNode* root,vector<int>& ans)
    {
        if(root==nullptr)
        {
            return;
        }
         inorder(root->left,ans);
         ans.push_back(root->val);
         inorder(root->right,ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
            vector<int> ans;
            inorder(root1,ans);
            inorder(root2,ans);
            sort(ans.begin(),ans.end());
            return ans;
        // if(root1->val==root2->val)
        // {
        //     ans.push_back(root1->val);
        //     ans.push_back(root2->val);
        //     getAllElemnets(root1->left,root2->left);
        // }
        // if(root1->val>root2->val)
        // {
        //     ans.push_back(root1->val);
        //     getAllElemnets(root1->left,root2->right);
        // }
        // if(root1->val<root2->val)
        // {
        //     ans.push_back(root2->val);
            // getAllElemnets(root1->left,root2->right);
        // }
            // return getAllElements(root1->left,root2->right);
            // ans.push_back(root1->val,root2->val);
            // return getAllElements(root1->left,root2->right);
        // return sort(ans.begin(),ans.end());
    }
};