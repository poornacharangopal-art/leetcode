class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int max=0;
         string s1=s.substr(i,k);
            int vowels=0;
            for(int i=0;i<s1.size();i++){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    vowels+=1;
                }
            }
            if(vowels>max){
                max=vowels;
            }
            while(i<s.size()-k){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    vowels-=1;
                }
                if(s[i+k]=='a'||s[i+k]=='e'||s[i+k]=='i'||s[i+k]=='o'||s[i+k]=='u'){
                    vowels+=1;
                }
                if(vowels>max){
                    max=vowels;
                }
                i++;
            }
        return max;
    }
};