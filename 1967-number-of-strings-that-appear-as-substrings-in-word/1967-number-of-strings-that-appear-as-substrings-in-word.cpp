class Solution {
public: 
    bool issubstring(string s,string t){
        int l=s.size();
        for(int i=0;i<t.size();i++){
            string m=t.substr(i,l);
            if(m==s){
                return true;
            }
        }
        return false;
    }
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i=0;i<patterns.size();i++){
            if(issubstring(patterns[i],word)){
                count+=1;
            }
        }
        return count;
    }
};