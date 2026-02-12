class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> p;
        if(nums2.size()<nums1.size()){
        for(int i=0;i<nums2.size();i++){
            for(int j=0;j<nums1.size();j++){
                if(nums2[i]==nums1[j]){
                    p.push_back(nums2[i]);
                    nums1.erase(nums1.begin()+j);
                    break;
                }
                else if(nums2[i]<nums1[j]){
                    break;
                }
            }
    }
        }
        else{
             for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    p.push_back(nums1[i]);
                    nums2.erase(nums2.begin()+j);
                    break;
                }
                else if(nums1[i]<nums2[j]){
                    break;
                }
            }
    }
        }
        return p;
    }
};