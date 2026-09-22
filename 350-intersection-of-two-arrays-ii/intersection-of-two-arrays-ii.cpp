class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;

        int n1=nums1.size();
        int n2=nums2.size();
        // set<int> s1;
        // set<int> s2;
        if(n1<n2)
        {
            vector<bool> used(n2, false);
            for(int i=0;i<=nums1.size()-1;i++)
            {
                for(int j=0;j<=nums2.size()-1;j++)
                {
                    if(nums1[i]==nums2[j] && !used[j])
                    {
                        ans.push_back(nums1[i]);
                        used[j] = true;
                        break;
                    }
                }
            }    
        }
        else if(n1==n2)
        {
            for(int i=0;i<=n1-1;i++)
            {
                if(nums1[i]==nums2[i])
                {
                    ans.push_back(nums1[i]);
                }
            }
        }
        else
        {
            vector<bool> used(n1, false);
            for(int i=0;i<=nums2.size()-1;i++)
            {
                for(int j=0;j<=nums1.size()-1;j++)
                {
                    if(nums2[i]==nums1[j] && !used[j])
                    {
                        ans.push_back(nums2[i]);
                        used[j] = true;
                        break;
                    }
                }
            } 
        }
        return ans;
    }
};