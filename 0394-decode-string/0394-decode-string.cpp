class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        stack<int>st2;
        int count;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==']'){
                string s1="";
                while(st.top()!="["){
                    s1+=st.top();
                    st.pop();
                }
                st.pop();
                count=st2.top();
                st2.pop();
                string s2="";
                for (int i = 0; i < count; i++)s2+=s1;
                st.push(s2);
            }
            else if(isdigit(s[i])){
                int num=0;
                while(i<s.size()&&isdigit(s[i])){
                    num=num*10+(s[i]-'0');
                    i++;
                }
                i--;
                st2.push(num);
            }
            else{
                string s1="";
                s1+=s[i];
                st.push(s1);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};