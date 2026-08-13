class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double ans=INT_MIN;
//        int n=nums.size();
//          if (k == 1) {
//     return static_cast<double>(*max_element(nums.begin(), nums.end()));
// }
//        double temp=0;
//        double ans=0;
//        for(int i=0;i<=n-k;i++)
//        {
//         temp=0;
//         for(int j=i;j<=i+k-1;j++)
//         {
//        temp+=nums[j];
//         }
//         ans=max(ans,temp);
//        }
//        return (ans/k);
for(int j=0;j<=k-1;j++)
    {
        sum+=nums[j];
    }
    ans=sum;
for(int i=k;i<=nums.size()-1;i++)
{
    sum += nums[i] - nums[i - k];
    ans=max(ans,sum);
}
return ans/k;
    }
};