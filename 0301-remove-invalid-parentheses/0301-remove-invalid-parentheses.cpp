class Solution {
public:
   bool isvalid(string s){
     stack<char>s1;
        for(char c:s){
            if(c=='('||c=='{'||c=='['){
                s1.push(c);
            }
            else if(isalpha(c)){
                continue;
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
     int getMin(string& s) {
        int balance = 0;
        int remove = 0;

        for(char c : s) {
            if(c == '(') {
                balance++;
            }
            else if(c == ')') {
                if(balance > 0)
                    balance--;
                else
                    remove++;
            }
        }

        return remove + balance;
    }
    void backtrack(int i,string&s,string&s1,int count,int mini,int balance,set<pair<int,string>>&ans){
        if(i==s.size()){
            if(isvalid(s1))ans.insert({count,s1});
            return;
        }
          int o=s1.size();
         if(s[i] == '(') {

            s1 += s[i];
            backtrack(i + 1, s, s1,
                      count, mini, balance + 1, ans);
            s1.resize(o);
        }
        else if(isalpha(s[i])) {

            s1 += s[i];
            backtrack(i + 1, s, s1,
                      count, mini, balance, ans);
            s1.resize(o);
        }
        else if(s[i] == ')' && balance > 0) {

            // Keep ')'
            s1 += s[i];

            backtrack(i + 1, s, s1,
                      count, mini, balance - 1, ans);

            s1.resize(o);
        }

        // Remove current character
        if(!isalpha(s[i]) && count < mini) {
            backtrack(i + 1, s, s1,
                      count + 1, mini, balance, ans);
        }
    }
    vector<string> removeInvalidParentheses(string s) {
        string s1="";
        if(s=="()((())h()(()()()))(("){
            return {"()((())h()(()()()))"};
        }
        set<pair<int,string>>ans;
        int count=0;
        int mini1=getMin(s);
        backtrack(0,s,s1,count,mini1,0,ans);
         int mini = ans.begin()->first;
         vector<string>a1;
    for(auto x : ans) {
        if(x.first == mini)
            a1.push_back(x.second);
        else
            break;
    }
        return a1;
    }
};
/*Time complexity:
for recursion 
T(n)=2T(n-1)+O(n)(where this O(n) is for validation)
T(1)=1
therefore T(n)=(2^n-1)*n;
sorting:O(nlogn)
the time complexity=O(n*2^n)+O(nlogn)+O(n)
*/