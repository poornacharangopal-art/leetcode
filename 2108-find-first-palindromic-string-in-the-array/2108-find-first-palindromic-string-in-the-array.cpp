class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            string s=words[i];
            reverse(s.begin(),s.end());
            if(s==words[i]){
                return words[i];
            }
        }
        return ans;
    }
};