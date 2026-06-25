class StockSpanner {
public:
    stack<pair<int,int>> st;
    StockSpanner() {
       
    }
    
    int next(int price) {
        int v=1;
        // for(int i=1;i<=price.size()-1;i++)
            while(!st.empty() && price>=st.top().first)
            {
                v+=st.top().second;
                st.pop();
            }
            // if(!st.epmty())
            // {
            //     v[i]=i+1;
            // }
            // else
            // {
            //     prevhigher=st.top();
            //     v[i]=i-prevhigher;
            // }
            st.push({price, v});
            return v;
        }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */