class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        if(m[nums.size()-1]!=2){
            return false;
        }
        for(auto &p:m){
            if(p.first!=nums[nums.size()-1]&&p.second!=1){
                return false;
            }
        }
        return true;
     }
};