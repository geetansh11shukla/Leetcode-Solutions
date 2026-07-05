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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        return diameterUtil(root);
    }

    int diameterUtil(TreeNode* root) {
        if(root == nullptr) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        int currheight=lh+rh;
        int leftheight=diameterUtil(root->left);
        int rightheight=diameterUtil(root->right);

        return max(currheight,max(leftheight,rightheight));
    }
    int height(TreeNode* node)
        {
        if(node==nullptr)
        {
            return 0;
        }
        return 1 + max(height(node->left), height(node->right));
        }
};