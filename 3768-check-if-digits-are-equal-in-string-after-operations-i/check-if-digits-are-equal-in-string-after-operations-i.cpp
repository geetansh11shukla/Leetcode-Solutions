class Solution {
public:
    bool hasSameDigits(string s) {
        string arr;
        for( int i=0;i<=(int)s.size()-2;i++)
        {
            int ans=((s[i]-'0')+(s[i+1]-'0'))%10;
            arr.push_back(ans+'0');
        }
        if(s.size()==2)
        {
            if(s[0]==s[1])
            {
                return true;
            }
            return false;
        }
       return hasSameDigits(arr);
    }
};