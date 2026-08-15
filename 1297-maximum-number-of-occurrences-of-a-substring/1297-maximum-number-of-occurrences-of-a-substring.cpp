class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
       unordered_map<string,int>mp;
       int i=0;
       int j=0;
       unordered_map<char,int>mp1;
       while(j<s.size()){
        mp1[s[j]]++;
        if (j - i + 1 > minSize) {

                mp1[s[i]]--;

                if (mp1[s[i]] == 0)
                    mp1.erase(s[i]);

                i++;
            }
        if(j-i+1==minSize&&mp1.size()<=maxLetters){
            string t=s.substr(i,j-i+1);
            mp[t]++;
        }
        j++;
       }
       int ans=0;
       for(auto&p:mp){
        ans=max(ans,p.second);
       }
       return ans;
    }
};