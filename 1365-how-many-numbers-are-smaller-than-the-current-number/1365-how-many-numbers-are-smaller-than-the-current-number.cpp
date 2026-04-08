class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>nums1=nums;
        vector<int>v;
        sort(nums1.begin(),nums1.end());
        unordered_map<int,int>m;
        for(int i=0;i<nums1.size();i++){
            int count=0;
            while(i!=nums1.size()-1&&nums1[i]==nums1[i+1]){
                i++;
                count++;
            }
            m[nums1[i]]=i-count;
        }
        for(int i=0;i<nums.size();i++){
            v.push_back(m[nums[i]]);
        }
        return v;
    }
};