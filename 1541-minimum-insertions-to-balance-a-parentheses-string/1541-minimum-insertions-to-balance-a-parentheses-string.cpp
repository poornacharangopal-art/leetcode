class Solution {
public:
    int minInsertions(string s) {
        int count=0;
        string s1="";
        stack<char>st;
        int l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(i<s.size()-1&&s[i]==')'&&s[i+1]==')'){
                    if(!st.empty())
                    st.pop();
                    else{
                        count++;
                    }
                    i++;
                }
                else{
                    if(!st.empty()){count--;
                    l++;
                    st.pop();
                    }
                    else{
                        count+=2;
                    }
                }
            }
        }
        count+=st.size()*2+l*2;
        return count;
    }
};