class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mp;
        for(char x:p){
            mp[x]++;
        }
        int i=0,j=0;
        int k=p.size();
        int count=mp.size();
        vector<int>v;
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
            if(mp[s[j]]==0){
                count--;
            }
            }
            if(j-i+1<k){
                j++;
            }
            else{
                if(count==0){
                    v.push_back(i);
                }
                if(mp.find(s[i])!=mp.end()){
                     if(mp[s[i]]==0){
                        count+=1;
                    }
                    mp[s[i]]+=1;
                }
                i++;
                j++;
            }
        }
        return v;
    }
};