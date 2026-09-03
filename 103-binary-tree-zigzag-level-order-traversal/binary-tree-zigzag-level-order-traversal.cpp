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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        int count=-1;
        if(root==nullptr)
        {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> level;
            int n=q.size();
            count++;
            for(int i=0;i<n;i++)
            {
            TreeNode* curr=q.front();
            q.pop();
            level.push_back(curr->val);
            if(curr->left!=nullptr)
            {
                q.push(curr->left);
            }
            if(curr->right!=nullptr)
            {
                q.push(curr->right);
            }
            }
            if(count%2!=0)
            {
                reverse(level.begin(),level.end());
            }
            result.push_back(level);
        }
        return result;
    }
};