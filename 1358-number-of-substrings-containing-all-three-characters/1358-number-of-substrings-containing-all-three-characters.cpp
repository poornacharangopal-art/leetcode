class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        unordered_map<char,int>mp;
        int i=0;
        for(int j=0;j<s.size();j++){
            mp[s[j]]++;
            while(mp.size()==3){
                count+=s.size()-j;
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
        }
        return count;
    }
};