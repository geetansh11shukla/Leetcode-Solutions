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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)
        {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> level;
            for(int i=0;i<=n-1;i++)
            {
                TreeNode* currnode=q.front();
                q.pop();
                level.push_back(currnode->val);
                if(currnode->left != nullptr)
                {
                    q.push(currnode->left);
                }
                if(currnode->right != nullptr)
                {
                    q.push(currnode->right);
                }
            }
            ans.push_back(level);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};