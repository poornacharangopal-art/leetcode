class Solution {
public:
    int minRotations(string s) {
        int ans=0;
        if(s[0]=='0'){
            ans=0;
        }
        else{
            int n=s[0]-'0';
            ans+=min(n-0,10-n);
        }
        for(int i=1;i<s.size();i++){
            int n1=s[i]-'0';
            int n2=s[i-1]-'0';
            if(n1>n2){
                ans+=min(n1-n2,10+n2-n1);
            }
            else{
                ans+=min(n2-n1,10+n1-n2);
            }
        }
        return ans;
    }
};