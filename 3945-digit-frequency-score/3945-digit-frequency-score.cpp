class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        while(n>0){
            int i=n%10;
            mp[i]++;
            n=n/10;
        }
        int score=0;
        for(auto &p:mp){
            score+=p.first*p.second;
        }
        return score;
    }
};