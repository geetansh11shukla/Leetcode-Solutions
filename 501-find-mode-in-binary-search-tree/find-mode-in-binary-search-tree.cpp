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
            return ;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        unordered_map<int,int> s;
        // priority_queue<pair<int,int>,vector<vector<int,int>>,greater<int,int>> q;
        for(int i:ans)
        {
            s[i]++;
        }
        int maxval=INT_MIN;
        // int ansval=0;
        for(auto& i:s)
        {
            if(i.second>maxval)
            {
                maxval=i.second;
            }
        }
        vector<int> modes;
        for(auto& i:s)
        {
            if(i.second==maxval)
            {
                modes.push_back(i.first);
            }
        }
        return modes;
    }
};