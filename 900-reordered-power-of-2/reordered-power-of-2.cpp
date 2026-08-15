bool isPowerOfTwo(long long x) {
    return x > 0 && (x & (x - 1)) == 0;
}
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        if(n==1) 
        {
            return true;
        }
        do {
            if(s[0]=='0')
            {
                continue;
            }
            long long num=stoll(s);
        if(isPowerOfTwo(num))
        {
            return true;
        }
    } while (next_permutation(s.begin(), s.end()));
    return false;
    }
};