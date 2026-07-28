class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> ans;
        vector<int> arr(temperatures.size(),0);
        for(int i=0;i<=temperatures.size()-1;i++)
        {
            while(!ans.empty() && temperatures[i]>temperatures[ans.top()])
            {
                int index=ans.top();
                ans.pop();
                arr[index]=i-index;
            }
            ans.push(i);
        }
        return arr;
    }
};