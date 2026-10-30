class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        for(int i=0;i<=arr1.size()-1;i++)
        {
            bool temp=true;
           for(int j=0;j<=arr2.size()-1;j++)
        {
            if(abs(arr1[i]-arr2[j])<=d)
            {
                temp=false;
                break;
            }
        }
        if(temp)
        {
            count++;
        }
        }
        return count;
    }
};