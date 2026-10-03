class Solution {
public:
  void backtrack(int i,string&s,set<string>&st){
     if(i == s.size()) {
            st.insert(s);
            return;
        }
        if(isalpha(s[i])){
            char c=s[i];
            s[i]=tolower(c);
            backtrack(i+1,s,st);
            s[i]=toupper(c);
            backtrack(i+1,s,st);
            s[i]=c;
        }
        else{
            backtrack(i+1,s,st);
        }
  }
    vector<string> letterCasePermutation(string s) {
      set<string>st;
      backtrack(0,s,st);
      vector<string>ans(st.begin(),st.end());
      return ans;  
    }
};