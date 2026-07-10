class Solution {
public:
    int arraySign(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]==0)
            {
            return 0;
            break;
            }
            else if(nums[i]>0) a++;
            else b++;
        }
        if(b%2==0) return 1;
        return -1;
    }
};