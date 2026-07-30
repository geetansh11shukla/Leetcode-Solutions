class Solution {
public:
    int minimumPushes(string word) {
        int sum=0;
        for(int i=0;i<=word.size()-1;i++)
        {
            if(i/8==0) sum+=1;
            else  if(i/8==1) sum+=2;
            else if(i/8==2)  sum+=3;
            else sum+=4;
        }
        return sum;
    }
};