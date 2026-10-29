class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> arr;
        int sum=0;
        long long ans=0;
        int mod=1e9+7;
        for(int i=0;i<=nums.size()-1;i++)
        {
            sum=0;
            for(int j=i;j<=nums.size()-1;j++)
            {
                sum=nums[j]+sum;
                arr.push_back(sum);
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=left-1;i<=right-1;i++)
        {
            ans=(ans+arr[i])%mod;
        }
        return ans;
    }
};