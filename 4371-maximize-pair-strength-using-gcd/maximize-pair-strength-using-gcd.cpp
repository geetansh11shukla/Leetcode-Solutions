class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        vector<int> ans=nums;
        long long ansval1=0,ansval2=0;
        for(int i=0;i<=ans.size()-1;i++)
        {
            for(int j=i+1;j<=ans.size()-1;j++)
            {
                long long a=gcd(ans[i],ans[j]);
                ansval1=(1LL*ans[i]*ans[j])/(a*a);
                {
                    ansval2=max(ansval2,ansval1);
                }
            }
        }
        return ansval2;
    }
};