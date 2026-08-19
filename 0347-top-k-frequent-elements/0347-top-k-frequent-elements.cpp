class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<int>num;
        for(auto&p:mp){
            num.push_back(p.first);
        }
        sort(num.begin(),num.end(),[&](int a,int b){
            if(mp[a]==mp[b]){
                return a<b;
            }
            return mp[a]>mp[b];
        });
        vector<int>ans(num.begin(),num.begin()+k);
        return ans;
    }
};