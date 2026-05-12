class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        } 
        sort(nums1.begin(),nums1.end());
        double n;
        if(nums1.size()%2!=0){
            n=nums1[(nums1.size()-1)/2];
        }
        else{
            int l=nums1[(nums1.size())/2];
             int m=nums1[(nums1.size())/2-1];
             n=(l+m)/2.0;
        }
        return n;
    }
};