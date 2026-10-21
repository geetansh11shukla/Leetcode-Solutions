// class Solution {
// public:
//     int sumSubarrayMins(vector<int>& arr) {
//         int sum=0;
//         stack<int> st;
//         int n=arr.size()-1;
//         sum+=arr[n];
//         st.push(arr[n]);
//         int j=0;
//         for(int i=n-1;i>=0;i--)
//         {
//             if(arr[i]<st.top())
//             {
//                 sum+=arr[i]*st.size();
//             }
//             else
//             {
//                 while(!st.empty() && arr[i]>st.top())
//                 {
//                     j=st.top();
//                     swap(arr[i],st.top());
//                 }
//                 sum+=arr[i]*j;
//             }
//             st.push(arr[i]);
//         }
//         return sum;
//     }
// };

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long sum = 0;
        int mod = 1e9 + 7;

        stack<int> st;

        for (int i = 0; i <= n; i++) {
            while (!st.empty() &&
                   (i == n || arr[st.top()] > arr[i])) {

                int index = st.top();
                st.pop();

                int left;
                if (st.empty())
                    left = index + 1;
                else
                    left = index - st.top();

                int right = i - index;

                sum = (sum +
                    (long long)arr[index] * left * right) % mod;
            }

            st.push(i);
        }

        return sum;
    }
};