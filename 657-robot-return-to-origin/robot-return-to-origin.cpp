class Solution {
public:
    bool judgeCircle(string moves) {
        int count1=0;
        int count2=0;
        for(char c: moves)
        {
            if(c=='U')
            {
                count1++;
            }
            else if(c=='L')
            {
                count2--;
            }
            else if(c=='R')
            {
                count2++;
            }
            if(c=='D')
            {
                count1--;
            }
        }
        return (count1==0 && count2==0);
    }
};