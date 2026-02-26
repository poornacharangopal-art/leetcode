class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>p;
        int i=0;
        while(i<nums.size()){
            if(i==0||nums[i]!=nums[i-1]){
                p.push_back(nums[i]);
            }
            i++;
        }
        if(p.size()<3){
            return p[p.size()-1];
        }
        return p[p.size()-3];     
    }
};