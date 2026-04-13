class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3){
            return 0;
        }
        int i=0;
        int count=0;
        while(i<s.size()-2){
            char a=s[i];
            char b=s[i+1];
            char c=s[i+2];
            if(a!=b&&b!=c&&a!=c){
                count++;
            }
            i++;
        }
        return count;
    }
};