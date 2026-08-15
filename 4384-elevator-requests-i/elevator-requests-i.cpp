class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        if (requests.empty()) return 0;
        if (requests.size() == 1) return abs(requests[0] - 0);
        int sum=abs(requests[0]-0);
        for(int i=0;i<=requests.size()-2;i++)
        {
                sum+=abs(requests[i+1]-requests[i]);
        }
        return sum;
    }
};