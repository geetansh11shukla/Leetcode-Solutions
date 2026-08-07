class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans1=INT_MAX;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            int index=(startIndex+i)% n;
            if(words[index]==target)
            {
                ans1=min(ans1,i);
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            int index=(startIndex-i+n) % n;
            if(words[index]==target)
            {
                ans1=min(ans1,i);
                break;
            }
        }
        return ans1==INT_MAX ?-1:ans1;
    }
};