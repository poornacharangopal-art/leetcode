class Solution {
public:
    int maximumLengthSubstring(string s) {
       int i=0;
       int j=0;
       int ans=0;
       unordered_map<char,int>mp;
       for(int j=0;j<s.size();j++){
        mp[s[j]]++;
        bool is=true;
        for(auto&p:mp){
            if(p.second>2){
                is=false;
                break;
            }
        }
        if(is){
            ans=max(ans,j-i+1);
        }
        else{
            mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;
        }
       } 
       return ans;
    }
};