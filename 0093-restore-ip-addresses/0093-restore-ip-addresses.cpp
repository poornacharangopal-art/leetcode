class Solution {
public:
bool isvalid(string s){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            count++;
        }
    }
    if(count!=3){
        return false;
    }
    else{
        long long  num=0;
        for(int i=0;i<s.size();i++){
             if(s[i]=='.'){
        if(num>255){
            return false;
        }
        num=0;
    }
    else{
        if(s[i]=='0'&&num==0&&(i!=s.size()-1&&s[i+1]!='.')){
            return false;
        }
        int n=s[i]-'0';
        num=num*10+n;
    }
        }
        if(num>255){
    return false;
}
        }
    return true;
}
void backtrack(string s,string&a,vector<string>&ans){
    if(s.size()==0){
        if(isvalid(a)){
            ans.push_back(a);
        }
    }
    for(int i=0;i<s.size();i++){
        string s1=s.substr(0,i+1);
        string s2=a;
        if(a.size()!=0)a+='.';
        a+=s1;
        backtrack(s.substr(i+1),a,ans);
        a=s2;
    }
}
    vector<string> restoreIpAddresses(string s) {
        string a="";
        vector<string>ans;
        backtrack(s,a,ans);
        return ans;
    }
};