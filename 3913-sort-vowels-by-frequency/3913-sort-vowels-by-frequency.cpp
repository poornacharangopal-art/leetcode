class Solution {
public:
    string sortVowels(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(!mp.count(s[i])&&(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')){
                mp[s[i]]=i;
            }
        }
        map<char,int>mp1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            mp1[s[i]]++;
        }
        vector<char>v;
        for(auto&p:mp){
            v.push_back(p.first);
        }
        sort(v.begin(),v.end(),[&](char a,char b){
            if(mp1[a]!=mp1[b])
            return mp1[a]>mp1[b];
            return mp[a]<mp[b];
        });
        string o="";
        for(char c:v){
            o+=string(mp1[c],c);
        }
        string ans="";
        int j=0;
        for(int i=0;i<s.size();i++){
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
             ans+=o[j++];
             else{
                ans+=s[i];
             }

        }
        return ans;
    }
};