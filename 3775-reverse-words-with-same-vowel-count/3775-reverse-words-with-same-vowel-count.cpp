class Solution {
public:
    string reverseWords(string s) {
        unordered_map<int,int>mp;
        int i=0;
        int j=0;
        int count=0;
        int one;
        while(j<s.size()){
            if(s[j]==' '){
                 if(i!=0&&count==one){
                    reverse(s.begin()+i,s.begin()+j);
                 }
                 else if(i==0){
                    one=count;
                 }
                i=j+1;
                count=0;
            }
            else if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                count++;
            }
            if(j==s.size()-1){
                if(i!=0&&count==one){
                    reverse(s.begin()+i,s.begin()+j+1);
                 }
            }
            j++;
        }
        return s;
    }
};