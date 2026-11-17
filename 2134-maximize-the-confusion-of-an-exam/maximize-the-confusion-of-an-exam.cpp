class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int left=0,max_freq=0,ans=0;
        unordered_map<char,int> freq;
        for(int i=0;i<=answerKey.size()-1;i++)
        {
            freq[answerKey[i]]++;
            max_freq=max(max_freq,freq[answerKey[i]]);

            while((i-left+1)-max_freq>k)
            {
                freq[answerKey[left]]--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};