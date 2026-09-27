class Solution {
public:
      struct Trie{
        bool endofword;
        unordered_map<char,Trie*> children;
        Trie():endofword(false)
        {

        }
      };
      Trie* root;
      Solution()
      {
        root=new Trie();
      }

      void insert(const string& word)
      {
        Trie* node= root;
        for(char c: word)
        {
            if(!node->children.count(c))
            {
                node->children[c]=new Trie();
            }
            node=node->children[c];
        }
        node->endofword=true;
      }
    bool wordBreak(string s, vector<string>& wordDict) {
        for(string& word:wordDict)
        {
            insert(word);
        }
        vector<int> memo(s.size(),-1);
        return dfs(s,0,memo);
    }
    bool dfs(string& s,int start,vector<int>& memo)
    {
        if(start==s.size())
        {
            return true;
        }
        if(memo[start]!=-1)
        {
            return memo[start];
        }
        Trie* node=root;
        for(int i=start;i<s.size();i++)
        {
            if(!node->children.count(s[i]))
            {
                break;
            }
            node=node->children[s[i]];
        if(node->endofword && dfs(s,i+1,memo))
        {
            return memo[start]=true;
        }
    }
        return memo[start]=false;
    }
};