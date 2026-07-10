class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>a(ratings.size(),1);
        vector<int>b(ratings.size(),1);
        int ans=0;
        for(int i=1;i<=ratings.size()-1;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                a[i]=a[i-1]+1;
            }
        }
         for(int i=ratings.size()-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                b[i]=b[i+1]+1;
            }
        }
         for(int i=0;i<=ratings.size()-1;i++)
        {
            ans+=max(a[i],b[i]);
        }
        return ans;
    }
};