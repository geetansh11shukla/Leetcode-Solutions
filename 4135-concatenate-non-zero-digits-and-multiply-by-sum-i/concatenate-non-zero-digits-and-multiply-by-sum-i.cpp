class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        int x=0;
        int y=0;
        while(n>0)
        {
            int rem=n%10;
            if(rem!=0)
            {
                sum+=rem;
                x=x*10+rem;
            }
            n=n/10;
        }
        while(x>0)
        {
            int rem=x%10;
            y=y*10+rem;
            x=x/10;
        }
        return y*sum;
    }
};