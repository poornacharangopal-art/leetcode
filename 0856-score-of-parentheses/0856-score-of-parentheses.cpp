class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st ;
        st.push(0) ;
        for(char c : s){
            if(c=='('){
                st.push(0);
            }
            else{
                int score ;
                int x = st.top() ;
                st.pop() ;
                if(x==0) score = 1 ;
                else score = 2*x ;
                st.top() += score ;
            }
        }
        return st.top() ;
    }
};