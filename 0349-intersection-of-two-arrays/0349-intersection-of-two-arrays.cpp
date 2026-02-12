class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> p;
        for(int i=0;i<nums2.size();i++){
            for(int j=0;j<nums1.size();j++){
                if(nums2[i]==nums1[j]){
                    p.push_back(nums2[i]);
                    break;
                }
                else if(nums2[i]<nums1[j]){
                    break;
                }
            }
            if(p.size()!=0){
                int i=0;
             while(i<p.size()-1){
                int count=0;
                if(p[i]==p[i+1]){
                    p.erase(p.begin()+i-count);
                    count++;
                }
                i++;
            }
            }
        }
        return p;
        
    }
};