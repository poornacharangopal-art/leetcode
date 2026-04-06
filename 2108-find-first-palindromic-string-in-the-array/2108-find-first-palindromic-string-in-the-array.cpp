class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            int l=0,k=words[i].size()-1;
            int m=1;
            while(l<=k){
                if(words[i][l]!=words[i][k]){
                    m=0;
                    break;
                }
                else{
                    l++;
                    k--;
                }
            }
            if(m){
                return words[i];
            }

    }
        return ans;
    }
};