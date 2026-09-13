class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> freq;
        if(hand.size()%groupSize!=0)
        {
            return false;
        }
        for(int i=0;i<=hand.size()-1;i++)
        {
            freq[hand[i]]++;
        }
        for(auto i=freq.begin();i!=freq.end();i++)
        {
            int start=i->first;
            int temp=i->second;
            if(temp>0)
            {
                for(int j=0;j<=groupSize-1;j++)
                {
                    int curr=start+j;
                    if(freq[curr]<temp)
                    {
                        return false;
                    }
                    freq[curr]-=temp;
                }
            }
        }
        return true;
    }
};