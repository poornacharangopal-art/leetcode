class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        if(k==nums.size()){
            int maxi=INT_MIN;
            for(int i=0;i<nums.size();i++){
                maxi=max(maxi,nums[i]);
            }
            return maxi;
        }
        else if(k==1){
            int maxi=INT_MIN;
            for(int i=0;i<nums.size();i++){
                if(mp[nums[i]]==1)
                maxi=max(maxi,nums[i]);
            }
            if(maxi==INT_MIN){
                return -1;
            }
            return maxi;
        }
        if(mp[nums[nums.size()-1]]>1&&mp[nums[0]]>1){
            return -1;
        }
        else if(mp[nums[nums.size()-1]]>1){
            return nums[0];
        }
        else if(mp[nums[0]]>1){
            return nums[nums.size()-1];
        }
            return max(nums[0],nums[nums.size()-1]);
    }
};