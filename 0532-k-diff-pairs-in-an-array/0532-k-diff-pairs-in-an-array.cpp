class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
         sort(nums.begin(),nums.end());
        int left=0;
        int right=1;
        int answer=0;
        while(right<nums.size()){
            if(left==right){
                right++;
                continue;
            }
            int diff=nums[right]-nums[left];
            if(diff==k){
                answer++;
                left++;
                right++;
                while(right<nums.size()&&nums[right]==nums[right-1]){
                    right++;
                }
            }
            else if(diff<k){
                right++;
            }
            else{
                left++;
            }
        }
        return answer;
    }
};