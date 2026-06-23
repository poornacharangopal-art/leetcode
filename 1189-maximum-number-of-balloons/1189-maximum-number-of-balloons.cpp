class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(char c:text){
            mp[c]++;
        }
        bool isok=true;
        int count=0;
        while(isok){
            mp['b']--;
            mp['a']--;
            mp['l']-=2;
            mp['o']-=2;
            mp['n']-=1;
            if(mp['b']<0||mp['a']<0||mp['l']<0||mp['o']<0||mp['n']<0){
                isok=false;
            }
            else{
                count++;
            }
        }
        return count;
    }
};