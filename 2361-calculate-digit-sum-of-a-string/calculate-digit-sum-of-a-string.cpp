class Solution {
public:
    string digitSum(string s, int k) {
        string a="";
        int sum=0;
        while(s.size()>k)
        {
            a="";
            for(int i=0;i<=s.size()-1;i+=k)
            {
                sum=0;
                for(int j=i;j<=min(i+k-1, (int)s.size()-1);j++)
                {
                    sum+=s[j]-'0';
                }
                a+=to_string(sum);
            }
            s=a;
        }
        return s;
    }
};