class Solution {
public:
void ansCombination(int i,vector<int> arr,int target,vector<vector<int>> &ans,vector<int> nums)
{
    if(i==arr.size())
    {
        if(target==0)
        {
            ans.push_back(nums);
        }
        return;
    }
    if(arr[i]<=target)
    {
        nums.push_back(arr[i]);
        ansCombination(i,arr,target-arr[i],ans,nums);
        nums.pop_back();
    }
    ansCombination(i+1,arr,target,ans,nums);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> nums;
        vector<vector<int>> ans;
        ansCombination(0,candidates,target,ans,nums);
        return ans;
    }
};