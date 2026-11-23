class Solution {
public:
    int minimumChairs(string s) {
        int ans=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='E'){
                count++;
                ans=max(ans,count);
            }
            else{
                count--;
            }
        }
        ans=max(ans,count);
        return ans;
    }
};