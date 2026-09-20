class Solution {
public:
    int reverseDegree(string s) {
        int num=0;
        for(int i=0;i<s.size();i++){
            int a=s[i]-'a';
            int c=26-a;
            num+=(c*(i+1));
        }
        return num;
    }
};