class Solution {
public:
    bool stoneGame(vector<int>& piles) {
      int n=piles.size(),alice=0,bob=0;
      int even=0;
      int odd=0;
      int win;
        for(int i=0;i<=n-1;i++)
        {
            if(i%2!=0)
            {
            odd+=piles[i];
            }
            else
            {
            even+=piles[i];
            }
        }
        if(even>odd || odd>even)
        {
            alice=win;
            return true;
        }
        return false;
    }
};