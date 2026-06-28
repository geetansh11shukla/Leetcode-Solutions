// class Solution {
// public:
//     string removeStars(string s) {
//         int n=s.size();
//         int i=0;
//        while(i<n)
//         {
//             if(s[i]=='*')
//             {
//                 s.erase(i,1);
//                  if (i > 0) {
//                     s.erase(i - 1, 1);
//                     i--;
//                 }
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         return s;
//     }
// };
class Solution {
public:
    string removeStars(string s) {
        string ans;
        int n=s.size();
        for(char c:s)
        {
            if(c=='*')
            {
                if(!ans.empty())
                {
                ans.pop_back();
                }
            }
            else
            {
                ans.push_back(c);
            }
        }
        return ans;
    }
};