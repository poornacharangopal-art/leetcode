class Solution {
public:
bool ispolindrome(string s){
    string s2=s;
    reverse(s2.begin(),s2.end());
    return s2==s;
}
void backtrack(string s,vector<string>&v,vector<vector<string>>&ans){
    if(s.size()==0){
        ans.push_back(v);
        return;
    }
    for(int i=0;i<s.size();i++){
        string parts=s.substr(0,i+1);
        if(ispolindrome(parts)){
            v.push_back(parts);
           backtrack(s.substr(i+1),v,ans);
           v.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string>v;
        vector<vector<string>>ans;
        backtrack(s,v,ans);
        return ans; 
    }
};