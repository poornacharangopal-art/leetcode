class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int count=0;
        int l;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                count++;
            }
            if(count==k){
                l=i;
                break;
            }
        }
        ans=s.substr(0,l);
        return ans;
    }
};