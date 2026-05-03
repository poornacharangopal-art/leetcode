class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return true;
        }
        string p=s;
        p+=p[0];
        p.erase(p.begin());
        while(p!=s){
            if(p==goal){
                return true;
            }
            p+=p[0];
            p.erase(p.begin());
        }
        return false;
    }
};