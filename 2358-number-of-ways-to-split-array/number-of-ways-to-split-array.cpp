class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum1=0,sum2=0;
        int count=0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            sum1+=nums[i];
        }
            for(int j=0;j<=nums.size()-2;j++)
            {
                sum2+=nums[j];
                long long sum3=sum1-sum2;
            if(sum2>=sum3)
            {
                count++;
            }
        }
        return count;
    }
};