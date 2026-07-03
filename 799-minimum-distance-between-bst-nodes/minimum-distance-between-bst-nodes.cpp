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
    int min1=INT_MAX;
    int prev=-1;
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return min1;
    }
        void inorder(TreeNode* node)
        {
        if(node==nullptr)
        {
            return;
        }
        inorder(node->left);
        if(prev!=-1)
        {
            min1=min(min1,node->val-prev);
        }
        prev=node->val;
        inorder(node->right);
    }
};