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
vector<vector<int>> ans;
vector<int> path;
void solve(TreeNode* node,int target)
{
    if(node==nullptr)
    {
        return;
    }
    path.push_back(node->val);
    target=target-node->val;
    if(node->left==nullptr && node->right==nullptr)
    {
      if(target==0)
      {
        ans.push_back(path);
      }
      path.pop_back();
      return;
    }
    solve(node->left,target);
    solve(node->right,target);
    path.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        solve(root,targetSum);
        return ans;
    }
};