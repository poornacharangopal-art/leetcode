class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int maxi=0;
        int i=0;
        for(int j=0;j<s.size();j++){
            mp[s[j]]++;
            while(true){
                int maxic=0;
                for(auto&p:mp){
                    maxic=max(maxic,p.second);
                }
                if((j-i+1)-maxic<=k){
                    maxi=max(j-i+1,maxi);
                    break;
                }
                else{
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
        }
        return maxi;
    }
};