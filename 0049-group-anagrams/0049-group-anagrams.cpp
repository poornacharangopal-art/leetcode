class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>>mp;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto&p:mp){
            vector<int>v=p.second;
            vector<string>s;
            for(int i=0;i<v.size();i++){
                s.push_back(strs[v[i]]);
            }
            ans.push_back(s);
        }
        return ans;
    }
};