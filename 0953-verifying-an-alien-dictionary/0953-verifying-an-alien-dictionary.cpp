class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        for(int i=0;i<words.size()-1;i++){
            int size=min(words[i].size(),words[i+1].size());
            int j;
            for( j=0;j<size;j++){
                if(words[i][j]==words[i+1][j])continue;
                else{
                    if(mp[words[i][j]]>mp[words[i+1][j]]){
                        return false;
                    }
                    break;
                }
            }
            if(j==size){
                if(words[i]==words[i+1])continue;
                if(words[i].size()<words[i+1].size())continue;
                return false;
            }

        }
        return true;
    }
};