class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        int ansval=0;
        while(n>0)
        {
            int rem=n%10;
            ans.push_back(rem);
            n=n/10;
        }
        for(int i=0;i<=ans.size()-2;i++)
        {
            for(int j=i+1;j<=ans.size()-1;j++)
            {
                ansval=max(ansval,ans[i]*ans[j]);
            }
        }
        return ansval;
    }
};