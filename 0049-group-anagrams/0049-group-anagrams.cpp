class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>>mp;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
         vector<vector<string>>v;
         for(auto&p:mp){
            vector<string>v1;
            for(int i=0;i<p.second.size();i++){
                v1.push_back(strs[p.second[i]]);
            }
            v.push_back(v1);
         } 
         return v;
    }
};