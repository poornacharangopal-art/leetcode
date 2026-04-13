class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int max=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==1){
                int diff=mp[nums[i]]+mp[nums[i+1]];
                if(diff>max){
                    max=diff;
                }
            }
        }
       return max;
    }
};