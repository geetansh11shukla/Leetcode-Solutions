class Solution {
public:
int solve(int n,vector<int> &f)
{
    if(n==1) return 1;
      if(n==2) return 2;
    //   if(n==3) return 3;
      if(f[n]!=-1)
      {
        return f[n];
      }
    f[n]=solve(n-1,f)+solve(n-2,f);
    return f[n];
}
    int climbStairs(int n) {
        vector<int> f(n+1,-1);
        return solve(n,f);
    }
};