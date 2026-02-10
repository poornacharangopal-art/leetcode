class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        nums1.erase(nums1.begin()+m,nums1.begin()+m+n);
        for(int i=0;i<n;i++){
             if(m==0){
                    nums1=nums2;
                }

            while(j<m){
                if(nums2[i]>=nums1[m-1]){
                    nums1.push_back(nums2[i]);
                    m++;
                    break;
                }
                 else if(nums2[i]<nums1[j]){
                nums1.insert(nums1.begin()+j,nums2[i]);
                m++;
                break;
                }
                
                j++;            
            }
                }
        
    }
    
};