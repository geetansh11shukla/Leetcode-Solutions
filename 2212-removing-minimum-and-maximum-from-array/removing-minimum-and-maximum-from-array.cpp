class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minval=INT_MAX,minindex=0;
        int maxval=INT_MIN,maxindex=0;
        int n=nums.size();
        if(nums.size()==1)
        {
             return 1;
        }
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]<minval)
            {
                minval=nums[i];
                minindex=i;
            }
        }
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]>maxval)
            {
                maxval=nums[i];
                maxindex=i;
            }
        }
        int front=max(minindex,maxindex)+1;
        int back=n-min(minindex,maxindex);
        int mixed1=(minindex+1)+(n-maxindex);
        int mixed2=(maxindex+1)+(n-minindex);
        return min({front,back,mixed1,mixed2});
    }
};