class Solution {
public:
    string processStr(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            char x=s[i];
            if(x!='*'&&x!='#'&&x!='%')
            ans+=x;
            else{
                if(ans!=""&&x=='#')
                ans+=ans;
                if(ans!=""&&x=='*')
                ans.erase(ans.end()-1);
                if(ans!=""&&x=='%')
                reverse(ans.begin(),ans.end());
            }

        }
        return ans;
    }
};