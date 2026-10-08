class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans;
        for(char c:s){
            if(c=='('){
                if(!st.empty())
                ans.push_back(c);
                  st.push(c);
            }
            else{
                char c1=st.top();
                st.pop();
                if(!st.empty()){
                    ans.push_back(c);
                }
            }
        }
        return ans;
    }
};