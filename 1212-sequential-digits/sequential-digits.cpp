class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
     string s="123456789";
     vector<int> ans;
     for(int i=2;i<=10-1;i++)
     {
        for(int j=0;j+i<10;j++)
        {
            string sub=s.substr(j,i);
            int a=stoi(sub);
            if(a>=low && a<=high)
            {
                ans.push_back(a);
            }
        }
     }
     return ans;
    }
};