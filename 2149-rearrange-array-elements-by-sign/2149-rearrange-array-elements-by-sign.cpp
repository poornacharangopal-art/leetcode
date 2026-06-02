class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>negitive,positive;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                negitive.push_back(nums[i]);
            }
            else{
                positive.push_back(nums[i]);
            }
        }
        int j=0,k=0;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans[i]=positive[j++];
            }
            else{
                ans[i]=negitive[k++];
            }
        }
        return ans;
    }
};