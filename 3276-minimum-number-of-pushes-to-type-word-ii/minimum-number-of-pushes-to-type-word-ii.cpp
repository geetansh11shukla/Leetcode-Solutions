class Solution {
public:
    int minimumPushes(string word) {
          int sum=0;
        // for(int i=0;i<=word.size()-1;i++)
        // {
        //     if(i/8==0) sum+=1;
        //     else  if(i/8==1) sum+=2;
        //     else if(i/8==2)  sum+=3;
        //     else sum+=4;
        // }
        vector<int> freq(26);
        for(char c:word)
        {
            freq[c-'a']++;
        }
        sort(freq.begin(),freq.end());
        for(int i=25;i>=0;i--)
        {
            if(freq[i]==0)
            {
                break;
            }
            if(25-i<8) sum+=freq[i];
            else if(25-i<16) sum=2*freq[i]+sum;
            else if(25-i<24) sum=3*freq[i]+sum;
            else sum=4*freq[i]+sum;
        }
        return sum;
    }
};