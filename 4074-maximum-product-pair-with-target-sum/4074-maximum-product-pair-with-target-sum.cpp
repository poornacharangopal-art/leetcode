class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<int>ans={-1,-1};
        unordered_map<int,int>mp;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(mp.count(target-nums[i])&&nums[i]!=target-nums[i]){
                if(maxi<=(nums[i])*(target-nums[i])){
                    maxi=nums[i]*(target-nums[i]);
                    if(nums[i]>target-nums[i])
                    ans={i,mp[target-nums[i]]};
                    else
                    ans={mp[target-nums[i]],i};
                }
            }
            if(!mp.count(nums[i]))
             mp[nums[i]]=i;
        }
        return ans;
    }
};