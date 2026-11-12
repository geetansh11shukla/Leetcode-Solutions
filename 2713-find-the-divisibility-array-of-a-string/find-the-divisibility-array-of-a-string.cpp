class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> ans;
        // int rem=0;
        long long temp=0;
        for(int i=0;i<=word.size()-1;i++)
        {
            // temp.push_back(rem);
            temp=(temp*10 +(word[i]-'0'))%m;
            if(temp==0)
            {
                ans.push_back(1);
            }
            else
            {
                // rem=temp%m;
                ans.push_back(0);
            }
        }
        return ans;
    }
};