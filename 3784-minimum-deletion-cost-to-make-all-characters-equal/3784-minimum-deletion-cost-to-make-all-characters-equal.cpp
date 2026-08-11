class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        unordered_map<char,long long>mp;
        for(char c:s){
            mp[c]=0;
        }
        for(int i=0;i<s.size();i++){
            mp[s[i]]+=cost[i];
        }
        vector<long long>costs;
        for(auto&p:mp){
            costs.push_back(p.second);
        }
        long long maxi=LONG_MIN;
        long long ans=0;
        for(int i=0;i<costs.size();i++){
            ans+=costs[i];
            maxi=max(costs[i],maxi);
        }
        return ans-maxi;
    }
};