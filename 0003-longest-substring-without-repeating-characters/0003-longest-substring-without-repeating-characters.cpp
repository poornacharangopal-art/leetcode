class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0||s.size()==1){
            return s.size();
        }
        string p="";
        int n=0;
        string s1;
        for(int i=0;i<s.size()-1;i++){
            p+=s[i];
            for(int j=i+1;j<s.size();j++){
                auto it=find(p.begin(),p.end(),s[j]);
                if(it==p.end()){
                    p+=s[j];
                }
                else{
                    break;
                }
            }
            if(p.size()>n){
                n=p.size();
            }
            p="";
        }
        return n;
    }
};