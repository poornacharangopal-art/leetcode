class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int i=0;
        int min=INT_MAX;
        while(i<=nums.size()-k){
            int diff=nums[i+k-1]-nums[i];
            if(diff<min){
                min=diff;
            }
            i++;
        }
        return min;
    }
};