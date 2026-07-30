class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        int a=1;
        while(a!=n){
            int i=0;
            string t="";
            while(i<s.size()){
                int count=1;
                while(i<s.size()-1&&s[i+1]==s[i]){
                    count++;
                    i++;
                }
                t+=to_string(count);
                t+=s[i];
                i++;
            }
            s=t;
            a++;
        }
        return s;
    }
};