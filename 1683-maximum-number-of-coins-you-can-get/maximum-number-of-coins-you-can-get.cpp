class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());

        int sum=0,i=0,j=piles.size()-1;
        while(i<j)
        {
            sum+=piles[j-1];
            i++;
            j=j-2;
        }
        return sum;
    }
};