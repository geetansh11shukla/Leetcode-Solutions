class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> a;
        for(int i=0;i<=m-1;i++)
        {
            string ans;
            for(int j=0;j<=n-1;j++)
            {
                if(i==0 || j==n-1)
                {
                    ans.push_back('.');
                }
                else
                {
                    ans.push_back('#');
                }
            }
            a.push_back(ans);
        }
        return a;
    }
};