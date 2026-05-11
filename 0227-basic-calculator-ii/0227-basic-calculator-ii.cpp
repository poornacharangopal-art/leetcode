class Solution {
public:
    int prec(char c){
        if(c=='*'||c=='/'){
            return 2;
        }
        if(c=='+'||c=='-'){
            return 1;
        }
        return -1;
    }
    bool isoperator(char c){
        switch(c){
            case '+':
            case '-':
            case '*':
            case '/':
            return true;
        }
        return false;
    }
    int calculate(string s) {
        stack<char>st;
        stack<int>st1;
        for(int i=0;i<s.size();i++){
            if(isoperator(s[i])){
                while(!st.empty()&&(prec(st.top())>=prec(s[i]))){
                    int op1=st1.top();
                    st1.pop();
                    int op2=st1.top();
                    st1.pop();
                    char c=st.top();
                    st.pop();
                    int temp;
                    if(c=='+'){
                        temp=op1+op2;
                    }
                     if(c=='-'){
                        temp=op2-op1;
                    } if(c=='*'){
                        temp=op2*op1;
                    }
                     if(c=='/'){
                        temp=op2/op1;
                    }
                    st1.push(temp);
                }
                st.push(s[i]);
            }
            else if(isdigit(s[i])){
                 int num = 0;

                while(i<s.size() && isdigit(s[i])){
                    num = num*10 + (s[i]-'0');
                    i++;
                }
                st1.push(num);
                i--;
            }
        }
        while(!st.empty()){
               int op1=st1.top();
                    st1.pop();
                    int op2=st1.top();
                    st1.pop();
                    char c=st.top();
                    st.pop();
                    int temp;
                    if(c=='+'){
                        temp=op1+op2;
                    }
                     if(c=='-'){
                        temp=op2-op1;
                    } if(c=='*'){
                        temp=op2*op1;
                    }
                     if(c=='/'){
                        temp=op2/op1;
                    }
                    st1.push(temp);
        }
        return st1.top();
    }
};