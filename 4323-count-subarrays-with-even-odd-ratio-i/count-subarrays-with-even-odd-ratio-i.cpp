class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        vector<int> ans=nums;
        int c=a/b;
        int count=0;
        int even=0,odd=0;
        for(int i=0;i<=ans.size()-1;i++)
        {
             even=0,odd=0;
            for(int j=i;j<=ans.size()-1;j++)
            {
                if(nums[j]%2==0) even++;
                else odd++;
                if(odd>0 && (even*b)<=(odd*a))
                {
                    count++;
                }
            }
        }
        return count;
    }
};