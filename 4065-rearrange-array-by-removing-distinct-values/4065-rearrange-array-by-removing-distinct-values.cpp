class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        int n=mp.size();
        while(n!=0){
            for(auto&p:mp){
                if(p.second==0)continue;
                ans.push_back(p.first);
                mp[p.first]--;
                if(mp[p.first]==0){
                    n--;
                }
            }
        }
        return ans;
    }
};