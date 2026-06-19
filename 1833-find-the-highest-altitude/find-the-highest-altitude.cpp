class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> ans(n+1);
        ans[0]=0;
        // int a=0;
        for(int i=1;i<=n;i++)
        {
            ans[i]=ans[i-1]+gain[i-1];
            // a+=gain[i];
        }
        // ans.push_back(a);
        int Fans1=INT_MIN;
        int m=ans.size();
        for(int i=0;i<=m-1;i++)
        {
            Fans1=max(Fans1,ans[i]);
        }
        return Fans1;
    }
};