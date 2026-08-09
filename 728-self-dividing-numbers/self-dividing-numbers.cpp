class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        bool found=false;
        vector<int> ans;
        if(left>=1 && right<=9)
        {
           for(int i=left;i<=right;i++)
        {
            ans.push_back(i);
        }
        return ans;
        }
        for(int i=left;i<=right;i++)
        {
            found=true;
            int temp1=i,temp2=i;
            while(temp1>0)
            {
                int rem=temp1%10;
                if(rem==0 || temp2%rem!=0)
                {
                    found=false;
                    break;
                }
                temp1=temp1/10;
            }
            if(found==true)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};