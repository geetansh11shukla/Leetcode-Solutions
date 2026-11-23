class ProductOfNumbers {
public:
vector<int> ans;
    ProductOfNumbers() {
    // ans.push_back(1);
    }
    
    void add(int num) {
        ans.push_back(num);
    }
    
    int getProduct(int k) {
        int product=1;
        int n=ans.size();
        if(k > ans.size()) return 0;
        for(int i=n-1;i>=n-k;i--)
        {
            product*=ans[i];
        }
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */