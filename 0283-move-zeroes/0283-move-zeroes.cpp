class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1||nums.size()==0){
            return;
        }
        int count=0;
        int i=nums.size()-1;
        while(i>=0){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                count+=1;
            }
            i--;
        }
        for(int j=0;j<count;j++){
            nums.push_back(0);
        }
    }
};