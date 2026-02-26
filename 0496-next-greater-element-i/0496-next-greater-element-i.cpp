class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>p(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            auto n=find(nums2.begin(),nums2.end(),nums1[i]);
            int l=n-nums2.begin();
            if(l!=nums2.size()-1){
            for(int j=l+1;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    p[i]=nums2[j];
                    break;
                }
            }
            }
        }
        return p;        
    }
};