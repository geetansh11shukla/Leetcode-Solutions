class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxval=*max_element(nums.begin(),nums.end());
        int sum=maxval;
        while(k-1>0)
        {
            maxval+=1;
            sum+=maxval;
            k--;
        }
        return sum;
    }
};