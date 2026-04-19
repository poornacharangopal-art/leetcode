class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>maxc;
        vector<int>minc(nums.size());
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            maxc.push_back(maxi);
        }
        for(int i=nums.size()-1;i>=0;i--){
            mini=min(mini,nums[i]);
            minc[i]=mini;
        }
        for(int i=0;i<maxc.size();i++){
            int score=maxc[i]-minc[i];
            if(score<=k){
                return i;
            }
        }
        return -1;
    }
};