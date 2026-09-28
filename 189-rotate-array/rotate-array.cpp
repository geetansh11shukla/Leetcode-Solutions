class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        k = k % n;
    //    while(k!=0)
    //    {
    //             int temp=nums[n-1];
    //             for(int i=n-1;i>=1;i--)
    //             {
    //             nums[i]=nums[i-1];
    //             }
    //             nums[0]=temp;
    //             k--;
    //    }

    int i=0,j=n-k;
    while(j<n)
    {
        ans.push_back(nums[j]);
        j++;
    }

    while(i<n-k)
    {
        ans.push_back(nums[i]);
        i++;
    }
    nums=ans;
    }
};