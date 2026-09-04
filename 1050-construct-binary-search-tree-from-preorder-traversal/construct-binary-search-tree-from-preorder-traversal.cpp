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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        return solve(preorder,index,LLONG_MIN,LLONG_MAX);
    }
    TreeNode* solve(vector<int>& nums,int& index,long long low,long long high)
    {
        if(index==nums.size())
        {
            return nullptr;
        }
        int rootval=nums[index];
        if(low>=rootval || rootval>=high)
        {
            return nullptr;
        }
        index++;
        TreeNode* root=new TreeNode (rootval);
        root->left=solve(nums,index,low,rootval);
        root->right=solve(nums,index,rootval,high);
        return root;
    }
};