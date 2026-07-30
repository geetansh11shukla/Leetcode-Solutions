class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sumval=0,a=n-k,minval=0;
        // vector<int> ans;
        // if(k<n/2)
        // {
        //     while(i<k)
        //     {
        //         ans.push_back(cardPoints[i]);
        //         i++;
        //     }
        //     while(j>n-k-1)
        //     {
        //         ans.push_back(cardPoints[j]);
        //         j--;
        //     }
        //     j=n-1;
        //     sort(ans.begin(),ans.end());
        //     while(k>0)
        //     {
        //         ansval+=cardPoints[j];
        //         j--;
        //         k--;
        //     }
        // }
        // else
        // {
        //     sort(ans.begin(),ans.end());
        //     while(k>0)
        //     {
        //         ansval+=cardPoints[j];
        //         j--;
        //         k--;
        //     }
        // }
        int totalsum=0;
        for(int i=0;i<=n-1;i++)
        {
            totalsum=totalsum+cardPoints[i];
        }
        for(int i=0;i<=a-1;i++)
        {
            sumval=sumval+cardPoints[i];
        }
            minval=sumval;
            for(int j=a;j<=cardPoints.size()-1;j++)
        {
            sumval+=cardPoints[j]-cardPoints[j-a];
            minval=min(minval,sumval);
        }
        return totalsum-minval;
    }
};