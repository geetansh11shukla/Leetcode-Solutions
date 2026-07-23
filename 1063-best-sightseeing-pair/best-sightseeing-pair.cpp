class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        vector<int> ans;
        int maxval=values[0];
        int ansval=0;
        for(int i=1;i<=values.size()-1;i++)
        {
            ansval=max(ansval,maxval+values[i]-i);
            maxval=max(maxval,values[i]+i);
        }
        return ansval;
    }
};