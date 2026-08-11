class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        unordered_map<int,int>mp1;
        for(auto&p:mp){
            mp1[p.second]++;
        }
        int ans=0;
        while(true){
            int k=0;
            for(auto &p:mp1){
                if(p.second>1){
                    int count=0;
                    for(auto&p1:mp){
                        if(p1.second==p.first&&count!=0){
                            mp[p1.first]--;
                            ans++;
                            count++;
                        }
                        else if(p1.second==p.first)count++;
                    }
                    unordered_map<int,int>mp2;
                    for(auto&p2:mp){
                        if(p2.second>0)
                        mp2[p2.second]++;
                    }
                    mp1=mp2;
                    k=1;
                }
                if(k==1){
                    break;
                }
            }
            bool found = false;

for (auto &p : mp1) {
    if (p.second > 1) {
        found = true;
        break;
    }
}

if (!found)
    break;
        }
        return ans;
    }
};