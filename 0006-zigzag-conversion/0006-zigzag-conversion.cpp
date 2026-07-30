class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        int jump=(numRows-1)*2;
        string ans="";
        for(int i=0;i<numRows;i++){
            for(int j=i;j<s.size();j+=jump){
                ans+=s[j];
                if(i!=0&&i!=numRows-1&&(j+jump-2*i)<s.size()){
                    ans+=s[j+jump-2*i];
                }
            }
            }
            return ans;
    }
};