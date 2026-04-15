class Solution {
public:
    string reverseWords(string s) {
        for(int i=s.size()-2;i>=0;i--){
            if(s[i]==' '&&s[i+1]==' '){
                s.erase(s.begin()+i+1);
            }
        }
        reverse(s.begin(),s.end());
        int key=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(s.begin()+key,s.begin()+i);
                key=i+1;
            }
            if(i==s.size()-1&&key!=i){
                reverse(s.begin()+key,s.end());
            }
        }
        if(s[0]==' '){
            s.erase(s.begin());
        }
        if(s[s.size()-1]==' '){
            s.erase(s.end()-1);
        }
        return s;
    }
};