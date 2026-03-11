class Solution {
public:
    int bitwiseComplement(int n) {
        string s="";
        if(n==0){
            return 1;
        }
        while(n>0){
            int i=n%2;
            n=n/2;
            s+=char(i+'0');
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                s[i]='0';
            }
            else if(s[i]=='0'){
                s[i]='1';
            }
        }
        int m=stoi(s,0,2);
        return m;
    }
};