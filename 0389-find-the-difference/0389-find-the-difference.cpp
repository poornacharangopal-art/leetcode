class Solution {
public:
    char findTheDifference(string s, string t) {
        char n=' ';
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return n;
        }
        else if(s.size()==0){
            return t[0];
        }
        else{
            for(int i=0;i<s.size();i++){

            if(s[i]!=t[i]){
                n=t[i];
                break;
            }
            else if(i==s.size()-1){
                n=t[i+1];
            }
            }
        }
        return n;        
    }
};