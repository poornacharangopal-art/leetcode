class Solution {
public:
    int longestSubstring(string s, int k) {
        unordered_map<char,int>mp;
        int i=0;
        int j=0;
        int count=0;
        while(i<=s.size()-k&&j<s.size()){
            mp[s[j]]++;
            if(j-i+1>=k){
                bool isok=true;
                for(auto&p:mp){
                    if(p.second<k){
                        isok=false;
                        break;
                    }
                }
                if(isok){
                    count=max(count,j-i+1);
                }
            }
            j++;
            if(j==s.size()){
                i++;
                j=i;
                mp.clear();
            }
        }
        return count;
    }
};