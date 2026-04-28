class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int num:arr){
            mp[num]++;
        }
        vector<int>v;
        for(auto&p:mp){
            v.push_back(p.second);
        }
        set<int>s(v.begin(),v.end());
        if(s.size()!=v.size()){
            return false;
        }
        return true;
    }
};