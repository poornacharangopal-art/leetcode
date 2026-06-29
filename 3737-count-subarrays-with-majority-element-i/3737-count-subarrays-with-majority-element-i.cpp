class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
             unordered_map<int,int>mp;
            for(int j=i;j<nums.size();j++){
                mp[nums[j]]++;
                int n=(j-i+1)/2;
                if(mp[target]>n){
                    count++;
                }
            }
        }
        return count;
    }
};