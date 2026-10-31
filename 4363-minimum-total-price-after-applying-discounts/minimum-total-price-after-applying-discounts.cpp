class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end()); /*sort the given array*/
        sort(discounts.begin(),discounts.end()); /*sort the given array*/
        // int n=prices.size();  /* calculating the array size*/
        // int m=discounts.size(); /*calculating the array size*/

        int i=discounts.size()-1,j=prices.size()-1;
        double ans=0.0;
        while(i>=0 && j>=0)
        {
            ans+=(prices[j] * (100.0 - discounts[i])) / 100.0;
            i--,j--;
        }
        while(j>=0)
        {
            ans+=prices[j];
            j--;
        }
        return ans;
    }
};