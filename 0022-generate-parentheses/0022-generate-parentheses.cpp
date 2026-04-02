class Solution {
public:
    bool isvalid(string s){
        stack<char>p;
        for(char c:s){
            if(c=='('||c=='{'||c=='['){
                p.push(c);
            }
            else{
                if(!p.empty()){
                char c1=p.top();
                p.pop();
                if((c1==')'&&c1!='(')||(c1==']'&&c1!='[')||(c1=='}'&&c1!='{')) {
                    return false;
                }
                }   
            }
        }
        return p.empty();
    }
    vector<string> generateParenthesis(int n) {
        vector<char>v;
        vector<string>ans;
        for(int i=0;i<n;i++){
            v.push_back('(');
            v.push_back(')');
        }
        sort(v.begin(),v.end());
        do{
            string s(v.begin(),v.end());
            if(isvalid(s)){
                ans.push_back(s);
            }
        }while(next_permutation(v.begin(),v.end()));
        return ans;
    }
};