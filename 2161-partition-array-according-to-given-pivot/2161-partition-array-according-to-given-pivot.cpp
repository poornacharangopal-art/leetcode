class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>small,large;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                small.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                large.push_back(nums[i]);
            }
            else{
                count++;
            }
       }
       while(count--){
        small.push_back(pivot);
       }
        for(int i=0;i<large.size();i++){
            small.push_back(large[i]);
        }
        return small;
    }
};