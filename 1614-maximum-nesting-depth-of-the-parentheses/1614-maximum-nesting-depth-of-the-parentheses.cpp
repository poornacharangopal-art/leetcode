class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ans++;
                count=max(ans,count);
            }
            else if(s[i]==')'){
                ans--;
            }
        }
        return count;
    }
};