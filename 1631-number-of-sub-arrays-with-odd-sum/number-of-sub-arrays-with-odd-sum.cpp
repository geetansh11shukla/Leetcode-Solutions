class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int even=1,odd=0,ans=0;
        const int m=1000000007;
        int sum=0;
        for(int i=0;i<=arr.size()-1;i++)
        {
            sum+=arr[i];
            if(sum%2!=0)
            {
                ans+=even;
                odd++;
            }
            else
            {
                ans+=odd;
                even++;
            }
            ans=ans%m;
        }
        return ans;
    }
};