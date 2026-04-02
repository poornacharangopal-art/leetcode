class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        for(char c:s){
            if(c=='('||c=='{'||c=='['){
                s1.push(c);
            }
            else{
                if(s1.empty()){
                    return false;
                }
                else{
                    char c1=s1.top();
                    s1.pop();
                    if((c==')'&&c1!='(')||(c=='}'&&c1!='{')||(c==']'&&c1!='[')){
                        return false;
                    }
                }
            }
        }
        return s1.empty();
        
    }
};