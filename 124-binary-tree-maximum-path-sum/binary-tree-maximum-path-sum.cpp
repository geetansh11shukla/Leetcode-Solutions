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
int sum=0,ans=INT_MIN;

    int dfs(TreeNode* root,int sum)
    {
        if(root==nullptr)
        {
            return 0;
        }
        int left=dfs(root->left,sum);
        int right= dfs(root->right,sum);

        left=max(0,left);
        right=max(0,right);
       ans=max(ans,left+right+root->val);
       return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};