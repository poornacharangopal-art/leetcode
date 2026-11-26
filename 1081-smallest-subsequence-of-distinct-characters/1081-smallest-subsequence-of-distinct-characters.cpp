class Solution {
public:
    string smallestSubsequence(string s) {
          stack<char>st;
        unordered_map<char,int>lastoccurence;
        unordered_set<char>visited;
        for(int i=0;i<s.size();i++){
            lastoccurence[s[i]]=i;
        }
        for(int i=0;i<s.size();i++){
            if(visited.find(s[i])!=visited.end()){
                continue;
            }
            while(!st.empty()&&s[i]<st.top()&&i<lastoccurence[st.top()]){
                visited.erase(st.top());
                st.pop();
            }
            st.push(s[i]);
            visited.insert(s[i]);
        }
        string result="";
        while(!st.empty()){
            result=st.top()+result;
            st.pop();
        }
        return result;
    }
};