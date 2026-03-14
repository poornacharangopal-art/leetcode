class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        } 
        double n;
        if(nums1.size()%2!=0){
            nth_element(nums1.begin(),nums1.begin()+(nums1.size()-1)/2,nums1.end());
            n=nums1[(nums1.size()-1)/2];
        }
        else{
            sort(nums1.begin(),nums1.end());
            n=(nums1[(nums1.size()/2-1)]+nums1[(nums1.size()/2)])/2.0;
        }
        return n;
    }
};