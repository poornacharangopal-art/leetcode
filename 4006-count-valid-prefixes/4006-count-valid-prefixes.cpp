class Solution {
public:
    int countValidPrefixes(string s) {
        int count=0;
        int ones=0;
        int zeros=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ones++;
            }
            else{
                zeros++;
            }
            if((i+1)%2!=0&&abs(ones-zeros)==1){
                count++;
            }
            else if((i+1)%2==0&&ones==zeros){
                count++;
            }
        }
        return count;
    }
};