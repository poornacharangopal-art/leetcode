class Solution {
public:
    bool isPalindrome(string s) {
        bool polin=false;
        for(int i=s.size()-1;i>=0;i--){
            if(!(isalnum(s[i]))){
                s.erase(s.begin()+i);
            }
            else{
                s[i]=tolower(s[i]);
            }
    }
    std::string p=s;
    reverse(p.begin(),p.end());
    if(p==s){
        polin=true;
    }
    return polin;
    }
};