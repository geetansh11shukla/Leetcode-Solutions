class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans=0;
        for(int i=k;;i=i+k)
        {
            bool found=false;
            for(int j=0;j<=nums.size()-1;j++)
            {
                if(i==nums[j])
                {
                    found=true;
                    break;
                }
            }
            if(!found)
            {
            ans=i;
            break;
            }
        }
        return ans;
    }
};