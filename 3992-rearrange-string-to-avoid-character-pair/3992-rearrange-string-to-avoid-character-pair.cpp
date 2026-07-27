class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int countx=0,county=0;
        for(char c:s){
            if(c==x)countx++;
            if(c==y)county++;
        }
        string t="";
        t+=string(county,y);
        t+=string(countx,x);
        for(char c:s){
            if(c!=x&&c!=y)
            t+=c;
        }
        return t;
    }
};