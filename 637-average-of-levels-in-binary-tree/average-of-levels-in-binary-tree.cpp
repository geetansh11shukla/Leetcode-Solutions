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
vector<double> averageOfLevels(TreeNode* root) {
    vector<double> ans;
    long long allval=0;
        if(root==nullptr)
        {
            return ans;
        }
        queue<TreeNode*> q1;
        q1.push(root);
        while(!q1.empty())
        {
        int n=q1.size();
        long long average=0;
        for(int i=0;i<=n-1;i++)
        {
            TreeNode* node=q1.front();
            q1.pop();
            allval+=node->val;
            if(node->left!=nullptr)
            {
                q1.push(node->left);
            }
            if(node->right!=nullptr)
            {
                q1.push(node->right);
            }
        }
        ans.push_back((double)allval/n);
        allval=0;
        }
        return ans;
    }
};