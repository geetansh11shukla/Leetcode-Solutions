class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=1;
        vector<int> v(n);
        for(int values=0;values<=n-1;values++)
        {
            if(nums[values]%2==0)
            {
                v[i]=nums[values];
                i=i+2;
            }
            else{
                v[j]=nums[values];
                j=j+2;
            }
        }
        return v;
    }
};