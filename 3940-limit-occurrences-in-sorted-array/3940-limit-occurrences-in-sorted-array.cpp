class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=nums.size()-1;i>=0;i--){
             mp[nums[i]]++;
            if(mp[nums[i]]>k){
                nums.erase(nums.begin()+i);
            }
        }
        return nums;
    }
};