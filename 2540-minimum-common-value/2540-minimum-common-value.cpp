class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1,mp2;
        int ans=INT_MAX;
        for(int x:nums1){
            mp1[x]++;
        }
        for(int x:nums2){
            mp2[x]++;
        }
        for(auto&p:mp1){
            if(mp2.count(p.first)&&p.first<ans){
                ans=p.first;
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};