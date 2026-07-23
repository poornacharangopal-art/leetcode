class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        for(int x:nums){
            mp[x]++;
        }
        if(k==0){
            for(auto&p:mp){
                if(p.second>1){
                    count++;
                }
            }
        }
        else{
            for(auto&p:mp){
                if(mp.count(p.first+k)){
                    count++;
                }
            }
        }
        return count;
    }
};