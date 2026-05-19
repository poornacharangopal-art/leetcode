class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end()),s2(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            if(s2.count(nums1[i])){
                return nums1[i];
            }
        }
        return -1;
    }
};