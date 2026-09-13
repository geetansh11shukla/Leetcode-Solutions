class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int> freq;
        if(nums.size()%k!=0)
        {
            return false;
        }
        for(int i=0;i<=nums.size()-1;i++)
        {
            freq[nums[i]]++;
        }
        for(auto i=freq.begin();i!=freq.end();i++)
        {
            int start=i->first;
            int temp=i->second;
            if(temp>0)
            {
                for(int j=0;j<=k-1;j++)
                {
                    int curr=start+j;
                    if(freq[curr]<temp)
                    {
                        return false;
                    }
                    freq[curr]-=temp;
                }
            }
        }
        return true;
    }
};