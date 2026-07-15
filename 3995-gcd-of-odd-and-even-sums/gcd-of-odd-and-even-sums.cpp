class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumeven=0,sumodd=0;
        for(int i=1;i<=n*2;i++)
        {
            if(i%2==0) sumeven+=i;
            else sumodd+=i;
        }
        int ans=min(sumeven,sumodd);
        while(ans>0)
        {
        if(sumeven%ans==0 && sumodd%ans==0)
        {
            break;
        }
        else
        {
            ans=ans-1;
        }
        }
        return ans;
    }
};