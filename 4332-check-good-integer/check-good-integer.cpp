class Solution {
public:
    bool checkGoodInteger(int n) {
        int digit_sum=0;
        int square_sum=0;
        while(n>0)
        {
            int rem=n%10;
            digit_sum+=rem;
            square_sum+=rem*rem;
            n=n/10;
        }
        if(square_sum-digit_sum>=50)
        {
            return true;
        }
        return false;
    }
};