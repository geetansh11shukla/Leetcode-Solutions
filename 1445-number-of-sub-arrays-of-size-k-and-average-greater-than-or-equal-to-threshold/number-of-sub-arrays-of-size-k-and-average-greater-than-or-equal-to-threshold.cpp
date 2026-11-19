class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int right=0,left=0,ans=0,sum=0;
        while(right<arr.size())
        {
            if(right-left==k-1)
            {
                sum+=arr[right];
                if(threshold<=sum/k)
                {
                    ans++;
                }
                right++;
            }
            else if(right-left<k-1)
            {
                sum+=arr[right];
                right++;
            }
            else
            {
                sum-=arr[left];
                left++;
            }
        }
        return ans;
    }
};