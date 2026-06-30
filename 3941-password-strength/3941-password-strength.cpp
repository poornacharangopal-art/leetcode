class Solution {
public:
    int passwordStrength(string password) {
        int strength=0;
        unordered_map<char,int>mp;
        for(char c:password){
            mp[c]++;
        }
        for(auto&p:mp){
            char c=p.first;
             if(isalpha(c)){
                if(islower(c)){
                    strength+=1;
                }
                else{
                    strength+=2;
                }
            }
            else if(isdigit(c)){
                strength+=3;
            }
            else{
                strength+=5;
            }
        }
        return strength;
    }
};