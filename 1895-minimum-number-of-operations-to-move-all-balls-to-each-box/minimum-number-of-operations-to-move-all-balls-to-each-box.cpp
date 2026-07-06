class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        int count=0;
        vector<int> v;
        for(int i=0;i<=n-1;i++)
        {
            count=0;
            for(int j=0;j<=n-1;j++)
            {
                if(i==j)
                {
                    continue;
                }
                 else if(boxes[j]=='1')
                    {
                        count+=abs(j-i);  
                    }
            }
            v.push_back(count);
        }
        return v;
    }
};