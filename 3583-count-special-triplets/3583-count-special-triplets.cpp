class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int>mp,left;
        long long ans=0;
        long long MOD=1e9+7;
        for(int x:nums){
            mp[x]++;
        }
        for(int i=0;i<nums.size();i++){
             mp[nums[i]]--;
         long long leftCount = left[2 * nums[i]];
        long long rightCount = mp[2 * nums[i]];

            ans = (ans + (leftCount * rightCount) % MOD) % MOD;
            left[nums[i]]++;
        }
        
        return ans;
    }
};