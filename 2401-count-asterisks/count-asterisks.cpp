class Solution {
public:
    int countAsterisks(string s) {
        int star=0,countbar=0;
        int i=0;
        while(i<=s.size()-1)
        {
            if(s[i]=='|')
            {
                countbar++;
            }
            else if(s[i]=='*')
            {
                if(countbar%2==0)
                {
                    star++;
                }
            }
            i++;
        }
        return star;
    }
};