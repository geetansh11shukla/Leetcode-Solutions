class Solution {
public:
    bool detectCapitalUse(string word) {
            int upperCount = count_if(word.begin(), word.end(), ::isupper);
            if(upperCount==word.size() || upperCount==0 || (upperCount==1 && isupper(word[0])))
            {
                return true;
            }
            return false;
    }
};