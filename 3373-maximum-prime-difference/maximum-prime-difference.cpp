class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int l=nums.size();
        int r=nums.size();
        int count=0,index1=0,index2=0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(nums[i] < 2) {
                continue;
            }
            for(int j=2;j*j<=nums[i];j++)
            {
            if(nums[i]%j==0)
            {
                count++;
                break;
            }
            }
            if(count==0)
            {
                index1=i;
                break;
            }
            count=0;
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i] < 2) {
                continue;
            }
            for(int j=2;j*j<=nums[i];j++)
            {
            if(nums[i]%j==0)
            {
                count++;
                break;
            }
            }
            if(count==0)
            {
                index2=i;
                break;
            }
            count=0;
        }
        return abs(index1-index2);
    }
};