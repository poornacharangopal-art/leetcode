class Solution {
public:
    int balancedStringSplit(string s) {
        unordered_map<char,int>mp;
        mp['L']=0;
        mp['R']=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp['L']==mp['R']){
                count++;
            }
        }
        return count;
    }
};