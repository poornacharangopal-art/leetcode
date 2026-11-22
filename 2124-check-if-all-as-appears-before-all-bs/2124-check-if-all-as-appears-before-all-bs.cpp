class Solution {
public:
    bool checkString(string s) {
      bool isok=true;
      for(int i=0;i<s.size();i++){
        if(s[i]=='b')isok=false;
        if(s[i]=='a'&&!isok)return false;
      }  
      return true;
    }
};