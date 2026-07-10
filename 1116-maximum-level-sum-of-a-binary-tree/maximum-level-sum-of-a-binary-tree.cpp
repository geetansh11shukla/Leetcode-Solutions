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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==nullptr){
            return 0;
        }
        q.push(root);
        int level=0,ans=0,max1=INT_MIN;
        while(!q.empty())
        {
            int n=q.size();
            int sum=0;
            level++;
            for(int i=0;i<=n-1;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left!=nullptr)
                {
                    q.push(node->left);
                }
                if(node->right!=nullptr)
                {
                    q.push(node->right);
                }
            }
            if(sum>max1)
            {
                max1=sum;
                ans=level;
            }
        }
        return ans;
    }
};