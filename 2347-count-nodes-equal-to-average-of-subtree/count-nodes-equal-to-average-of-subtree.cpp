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
    int ans=0;
    int treeSum(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        int left=treeSum(root->left);
        int right=treeSum(root->right);

        // int count=1+left+right;
        int sum=root->val+left+right;
        // if(sum/count==root->val)
        // {
        //     ans++;
        // }
        return sum;
    }
    int treeCount(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        int left=treeCount(root->left);
        int right=treeCount(root->right);

        int count=1+left+right;
        // int sum=root->val+left+right;
        // if(sum/count==root->val)
        // {
        //     ans++;
        // }
        return count;
    }
    void treeAverage(TreeNode* root)
    {
        if(root==nullptr)
        {
            return ;
        }
        int leftS=treeSum(root->left);
        int rightS=treeSum(root->right);
        int leftC=treeCount(root->left);
        int rightC=treeCount(root->right);

        // int count=1+left+right;
        // int sum=root->val+left+right;
        if((leftS+rightS+root->val)/(leftC+rightC+1)==root->val)
        {
            ans++;
        }
        treeAverage(root->left);
        treeAverage(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        treeAverage(root);
        return ans;
    }
};