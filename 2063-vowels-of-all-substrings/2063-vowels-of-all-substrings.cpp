class Solution {
public:
    bool isvowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return true;
    }
    return false;
   }
    long long countVowels(string word) {
        long long ans=0;
        int n=word.size();
        for(int i=0;i<word.size();i++){
            if(isvowel(word[i])){
                ans+= (long long)(i + 1) * (n - i);
            }
        }
        return ans;
    }
};