class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0,count=0;
        int left=0,right=0;
        // while(right<s.size())
        // {
        //     count=0;
        //     for(int i=left;i<=right;i++)
        //     {
        //         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        //         {
        //            count++;
        //         }
        //         ans=max(ans,count);
        //     }
        //         right++;
        //         left++;
        // }
        // return ans;
        while(right<s.size())
        {
            if(right-left>k-1)
            {
                if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u')
                {
                    count--;
                }
                left++;
            }
            else
            {
                if(s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u')
                {
                    right++;
                    count++;
                    ans=max(ans,count);
                }
                else
                {
                    right++;
                }
            }
        }
        return ans;
    }
};