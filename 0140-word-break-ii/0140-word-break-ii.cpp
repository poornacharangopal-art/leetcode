class Solution {
public:
    int n;
    void backtrack(int i,string&s,string s1,vector<string>&v,vector<string>&ans,vector<string>&dict){
        if(i==n){
            if(s1!="")
                    return;
            string a;
            for(int i=0;i<v.size();i++){
                a+=v[i];
                 if(i!=v.size()-1)
            a+=" ";
            }
            ans.push_back(a);
            return;
        }
        s1+=s[i];
        bool isok=false;
        for(int i=0;i<dict.size();i++){
            if(dict[i]==s1){
                isok=true;
            }
        }
        string s2=s1;
        if(isok){
            v.push_back(s1);
            s1="";
            backtrack(i+1,s,s1,v,ans,dict);
            v.pop_back();
            s1=s2;
        }
        backtrack(i+1,s,s1,v,ans,dict);
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        n=s.size();
        vector<string>ans,v;
        backtrack(0,s,"",v,ans,wordDict);
        return ans;
    }
};