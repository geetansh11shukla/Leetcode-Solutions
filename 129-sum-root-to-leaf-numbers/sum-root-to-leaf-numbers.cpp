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
int sum=0;
    int sumNumbers(TreeNode* root) {
        Sumtree(root,0);
        return sum;
    }
    void Sumtree(TreeNode* node,int n)
    {
        if(node==nullptr)
        {
            return ;
        }
        n=n*10+node->val;
        if(node->left==NULL && node->right==NULL)
        {
            sum+=n;
        }
        Sumtree(node->left,n);
        Sumtree(node->right,n);
    }
};