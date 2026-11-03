class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0,count1=0,a=0;
        bool temp=false;
        for(int i=0;i<=bank.size()-1;i++)
        {
            for(int j=0;j<=bank[i].size()-1;j++)
        {
            if(bank[i][j]=='1')
            {
                count1++;
                temp=true;
            }
        }
        if(temp==true)
        {
            if(a!=0)
            {
                ans+=count1*a;
            }
            a=count1;
        }
        temp=false;
        count1=0;
        }
        return ans;
    }
};