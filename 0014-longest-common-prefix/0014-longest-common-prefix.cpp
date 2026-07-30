class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool isok=true;
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char c=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]==c)continue;
                else{
                    isok=false;
                    break;
                }
            }
            if(isok){
                ans+=c;
            }
            else{
                break;
            }
        }
        return ans;
    }
};