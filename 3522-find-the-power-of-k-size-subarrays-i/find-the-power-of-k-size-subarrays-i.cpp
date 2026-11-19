class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        // int max_value=INT_MIN;
        for(int i=0;i<=nums.size()-k;i++)
        {
            bool temp=true;
            for(int j=i;j<i+k-1;j++)
            {
                if(nums[j+1]-nums[j]!=1)
                {
                    temp=false;
                    break;
                }
            }
                if(temp==true)
                {
                    int max_value=*max_element(nums.begin()+i,nums.begin()+k+i);
                    ans.push_back(max_value);
                }
                else
                {
                    ans.push_back(-1);
                }
        }
        return ans;
    }
};