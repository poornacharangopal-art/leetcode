class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
         vector<int>v;
        for(int x:nums){
            if(x%2==0){
                mp[x]++;
                if(mp[x]==1){
                v.push_back(x);
            }
            }
        }
       
        sort(v.begin(),v.end(),[&](int a,int b){
            if(mp[a]==mp[b])
            return a<b;
            return mp[a]>mp[b];
        });
        if(v.size()==0){
            return -1;
        }
        return v[0];
        
    }
};