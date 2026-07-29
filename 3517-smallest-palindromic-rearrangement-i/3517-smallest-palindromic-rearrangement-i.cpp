class Solution {
public:
    string smallestPalindrome(string s) {
       unordered_map<char,int>mp;
       for(char c:s){
        mp[c]++;
       } 
       string ans;
       int mid=-1;
       for(int i=0;i<=25;i++){
        char x=char(i+97);
        if(mp[x]%2!=0)mid=i;
        if(mp[x]>0){
            int n=mp[x]/2;
            mp[x]-=n;
            ans+=string(n,x);
        }
       }
       if(mid==-1&&s.size()==2){
        return s;
       }
       else if(mid!=-1){
        char x=char(mid+97);
        mp[x]--;
        ans+=x;
       }
        for(int i=25;i>=0;i--){
            char c=char(i+97);
            if(mp[c]>0){
            int n=mp[c];
            ans+=string(n,c);
            }
        }
       return ans;
    }
};