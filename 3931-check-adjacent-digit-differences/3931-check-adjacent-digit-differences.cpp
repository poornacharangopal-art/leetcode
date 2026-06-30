class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i=0;i<s.size()-1;i++){
            if(abs(s[i+1]-s[i])<=2){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};