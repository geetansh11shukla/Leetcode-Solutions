class Solution {
public:
    int countKeyChanges(string s) {
        if(s.size()<=1)
        {
            return 0;
        }
        int count=0;
        for(int i=0;i<=s.size()-2;i++)
        {
            if(tolower(s[i])!=tolower(s[i+1]))
            {
                count++;
            }
        }
        return count;
    }
};