class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>firstIndex;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        int i=0;
        for(int x:nums){
            if(!firstIndex.count(x)){
                firstIndex[x]=i;
            }
            i++;
        }
        for(int x:nums){
            mp1[x]++;
        }
        for(auto&p:mp1){
            mp2[p.second]++;
        }
        vector<int>v;
        for(auto&p:mp1){
            if(mp2[p.second]==1){
                v.push_back(p.first);
            }
        }
        if(v.empty())
        return -1;
        else{
            sort(v.begin(),v.end(),[&](int a,int b){
                return firstIndex[a]<firstIndex[b];
            });
            return v[0];
        }
    }
};