//https://leetcode.com/problems/hand-of-straights/

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W)
    {
        int len = hand.size();
        if(len%W != 0)
            return false;
        sort(hand.begin(), hand.end());
        map<int, int> cnt;
        for(auto h:hand)
            cnt[h]++;
        for(auto it:cnt)
        {
            if(it.second > 0){
                for(int i=W-1; i>=0; i--)
                {
                    cnt[it.first+i] -= cnt[it.first];
                    if(cnt[it.first+i] < 0)
                        return false;
                }
            }
        }
        return true;
    }
};