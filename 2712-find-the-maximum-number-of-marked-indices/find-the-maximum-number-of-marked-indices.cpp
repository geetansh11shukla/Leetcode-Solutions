class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int i=0,j=nums.size()/2,count=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        while(i<n/2 && j<n)
        {
            if((2LL)*nums[i]<=nums[j])
            {
                count+=2;
                i++,j++;
            }
            else
            {
                j++;
            }
        }
        return count;
    }
};