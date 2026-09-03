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
    unordered_set<int> st;
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==nullptr)
        {
            return false;
        }
        int current=root->val;
        int need=k-current;
        if(st.find(need)!=st.end())
        {
            return true;
        }
        st.insert(root->val);
        return findTarget(root->left,k) ||findTarget(root->right,k);
    }
};