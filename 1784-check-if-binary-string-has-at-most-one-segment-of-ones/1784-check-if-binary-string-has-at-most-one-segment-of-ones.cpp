class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()==1){
            if(s[0]=='1'){
                return true;
            }
            else{
                return false;
            }
        }
        for(int i=1;i<s.size();i++){
            if(s[i]=='1'&&s[i]!=s[i-1]){
                return false;;
            }
        }  
        return true; 
    }
};