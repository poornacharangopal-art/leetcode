class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int ans=0;
        int i=0;
        while(i<nums.size()){
            int curr=nums[i];
            i++;
            while(i<nums.size()&&nums[i]==curr){
                ans++;
                i++;
            }
            i++;
        }
        if((nums.size()-ans)%2==1){
            ans++;
        }
        return ans;
    }
};