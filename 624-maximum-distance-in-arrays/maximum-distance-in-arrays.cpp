class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int min_value=arrays[0][0],max_value=arrays[0].back();
        int ans=0;
        for(int i=1;i<arrays.size();i++)
        {
            // int d1 = abs(arrays[i][0] - arrays[j].back());
            // int d2 = abs(arrays[j][0] - arrays[i].back());
            // ans = max(ans, max(d1, d2));

            ans=max(ans,arrays[i].back()-min_value);
            ans=max(ans,max_value-arrays[i][0]);

            min_value=min(min_value,arrays[i][0]);
            max_value=max(max_value,arrays[i].back());
        }
        return ans;
    }
};