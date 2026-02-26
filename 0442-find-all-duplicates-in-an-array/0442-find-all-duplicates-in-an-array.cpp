class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>p;
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return p;
        }
        int i=0;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                p.push_back(nums[i]);
                i=i+1;
                while(i<nums.size()-1&&nums[i]==nums[i+1]){
                    i++;
                }
            }
            else{
                i++;
            }

        }
        return p; 
    }
};