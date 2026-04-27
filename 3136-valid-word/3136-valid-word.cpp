class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3){
            return false;
        }
        unordered_map<char,int>mp;
        for(char x:word){
            char ch=tolower(x);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                mp['v']++;
            }
            else if(isdigit(ch)){
                mp['n']++;
            }
            else if(isalpha(ch)){
                mp['c']++;
            }
            else{
                mp['o']++;
            }
        }
        if(mp['v']!=0&&mp['o']==0&&mp['c']!=0){
            return true;
        }
        return false;
    }
};