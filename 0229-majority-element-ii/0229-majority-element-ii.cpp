class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> p;
        int count=1;
        sort(nums.begin(),nums.end());
        if(nums.size()==0)return p;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count+=1;
            }
            else{
            if(count>nums.size()/3){
                p.push_back(nums[i-1]);
            }
            count=1;
            }
          

        }
        if(count>nums.size()/3){
            p.push_back(nums[nums.size()-1]);
        }
        return p;
        
    }
};