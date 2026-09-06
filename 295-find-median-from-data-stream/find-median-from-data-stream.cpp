class MedianFinder {
public:
    priority_queue<int, vector<int>,greater<int>> q2;
    priority_queue<int> q1;
    MedianFinder() {
        // int a=q1.top();
        // int b=q2.top();
        // int ans=(a+b)/2;
    }
    
    void addNum(int num) {
        if(q1.empty() || num<=q1.top())
        {
            q1.push(num);
        }
        else
        {
            q2.push(num);
        }
        if(q1.size()>q2.size()+1)
        {
            int a=q1.top();
            q1.pop();
            q2.push(a);
        }
        if(q2.size()>q1.size())
        {
            int a=q2.top();
            q2.pop();
            q1.push(a);
        }
    }
    
    double findMedian() {
        if(q1.size() > q2.size())
        {
            return q1.top();
        }
        int a=q1.top();
        int b=q2.top();
        float ans=(a+b)/2.0;
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */