class Solution {
public:
    string frequencySort(string s) {
      unordered_map<char,int>mp1;
      for(char x:s){
        mp1[x]++;
      }
      vector<char>v;
      for(char x:s){
        if(find(v.begin(),v.end(),x)==v.end()){
            v.push_back(x);
        }
      }
      sort(v.begin(),v.end(),[&](char a,char b){
        return mp1[a]>mp1[b];
      });
      string ans="";
      for(char x:v){
        ans+=string(mp1[x],x);
      }
      return ans;
    }
};