class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>&nums) {
        sort(nums.begin(),nums.end());
        long long sum=mass;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=sum){
                sum+=nums[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};