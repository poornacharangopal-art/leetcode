class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=nums.size()-1;;
        while(j>=0){
            int n=j;
            int i=n-1;
            int count=1;
            while(i>=0&&nums[i]==nums[n]){
                count+=1;
                if(count>2){
                    nums.erase(nums.begin()+i);
                    n=n-1;
                }
                i--;
            }
            j=j-count;
        }
        return nums.size();       
    }
};