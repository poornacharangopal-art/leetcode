class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int i=0;
        int maxi=INT_MIN;
        for(int j=0;j<s.size();j++){
            mp[s[j]]++;
            while(true){
                int sum=j-i+1;
                int maxfreq=0;
                for(auto&p:mp){
                    maxfreq=max(maxfreq,p.second);
                }
                if(sum-maxfreq<=k){
                    maxi=max(maxi,j-i+1);
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