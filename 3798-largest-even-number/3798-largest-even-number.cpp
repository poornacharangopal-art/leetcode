class Solution {
public:
    string largestEven(string s) {
        int n=s[s.size()-1]-'0';
        if(n%2==0){
            return s;
        }
        while(!s.empty()){
            int n=s[s.size()-1]-'0';
            if(n%2==0){
                return s;
            }
            s.pop_back();
        }
        return s;
    }
};