class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int>mp;
        for(char c:word){
            mp[c]++;
        }
        unordered_map<int,int>mp1;
        for(auto &p:mp){
            mp1[p.second]++;
        }
        auto it=mp.begin();
        if(mp1.size()==1){
            if(it->second==1)return true;
            if(mp.size()==1)return true;
            return false;
        }
        if(mp1.size()==2){
            int a,b,a1,b1;
            int count=0;
            for(auto&p:mp1){
                if(count==0){
                    a=p.second;
                    a1=p.first;
                }
                else{
                    b=p.second;
                    b1=p.first;
                }
                count++;
            }
            if(a==1&&(a1-b1==1||a1==1)){
                return true;
            }
            else if(b==1&&(b1-a1==1||b1==1))
            return true;
        }
        return false;
    }
};