class Solution {
public:
    int minLengthAfterRemovals(string s) {
        stack<char>st;
        int a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
            if(!st.empty()&&st.top()=='a'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        else{
             if(!st.empty()&&st.top()=='b'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        }
        return st.size();
    }
};