class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<long long,int>mp1,mp2;
        int count=0;
        for(int x:nums1){
            mp1[1LL*x*x]++;
        }
        for(int x:nums2){
            mp2[1LL*x*x]++;
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=i+1;j<nums1.size();j++){
                long long pro=1LL*nums1[i]*nums1[j];
                if(mp2.count(pro)){
                    count+=mp2[pro];
                }
            }
        }
           for(int i=0;i<nums2.size();i++){
            for(int j=i+1;j<nums2.size();j++){
                long long pro=1LL*nums2[i]*nums2[j];
                if(mp1.count(pro)){
                    count+=mp1[pro];
                }
            }
        }
        return count;
    }
};