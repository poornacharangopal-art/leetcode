class Solution {
public:
    string longestPalindrome(string s) {
        int l=s.size();
        int start=0,maxlength=0;
        if(l==0||l==1){
            return s;
        }
        for(int i=0;i<l;i++){
            int m=i,n=i;
            while(m>=0&&n<l&&s[m]==s[n]){
                if(n-m+1>maxlength){
                    maxlength=n-m+1;
                    start=m;
                }
                m--;
                n++;
            }
                 m=i,n=i+1;
            while(m>=0&&n<l&&s[m]==s[n]){
                if(n-m+1>maxlength){
                    maxlength=n-m+1;
                    start=m;
                }
                m--;
                n++;
            }
        }
        return s.substr(start,maxlength);
    }
};