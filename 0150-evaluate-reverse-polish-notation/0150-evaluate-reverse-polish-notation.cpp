class Solution {
public:
    bool isoperator(string s) {
    if (s == "+" || s == "-" || s == "*" || s == "/") {
        return true;
    }
    return false;
}
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            if(isoperator(tokens[i])){
                int op2=st.top();
                st.pop();
                int op1=st.top();
                st.pop();
                int temp;
                if(tokens[i]=="+"){
                    temp=op1+op2;
                }
                 if(tokens[i]=="-"){
                    temp=op1-op2;
                 }
                  if(tokens[i]=="*"){
                    temp=op1*op2;
                  }
                   if(tokens[i]=="/"){
                    temp=op1/op2;
                   }
                st.push(temp);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};