class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        for(char x:s){
            char ch=tolower(x);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end(),[&](char a,char b){
            int n1=a;
            int n2=b;
            return a<b;
        });
        string o="";
        for(char x:v){
            o+=x;
        }
        string ans="";
        int j=0;
        for(char x:s){
            char ch=tolower(x);
             if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                ans+=o[j++];
             }
             else{
                ans+=x;
             }
        }
        return ans;
    }
};