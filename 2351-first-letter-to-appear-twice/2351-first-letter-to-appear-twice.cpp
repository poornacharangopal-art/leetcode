class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        char c;
        for(char x:s){
            mp[x]++;
            if(mp[x]==2){
                c=x;
                break;
            }
        }
        return c;
    }
};