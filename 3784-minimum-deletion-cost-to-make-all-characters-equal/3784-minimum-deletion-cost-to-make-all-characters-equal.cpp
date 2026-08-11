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
        sort(costs.begin(),costs.end());
        long long ans=0;
        for(int i=0;i<costs.size()-1;i++){
            ans+=costs[i];
        }
        return ans;
    }
};