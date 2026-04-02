class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>arr;
        int i=0;
        while(i<nums.size()-1){
            int a=nums[i];
            int b=nums[i+1];
            arr.push_back(b);
            arr.push_back(a);
            i=i+2;
        }
        return arr;
    }
};