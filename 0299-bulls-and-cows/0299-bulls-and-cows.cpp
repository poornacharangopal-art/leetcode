class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>mp;
        for(char x:secret){
            mp[x]++;
        }
        int bulls=0,cows=0;
        for(int i=0;i<guess.size();i++){
            if(guess[i]==secret[i]){
                bulls++;
                mp[guess[i]]--;
                if(mp[guess[i]]==0){
                    mp.erase(guess[i]);
                }
            }
            }
             for(int i=0;i<guess.size();i++){
                if(guess[i]!=secret[i]){
                    if(mp.count(guess[i])){
                        cows++;
                          mp[guess[i]]--;
                if(mp[guess[i]]==0){
                    mp.erase(guess[i]);
                }
                    }
                }
            }
        return to_string(bulls) + "A" + to_string(cows) + "B";

    }
};