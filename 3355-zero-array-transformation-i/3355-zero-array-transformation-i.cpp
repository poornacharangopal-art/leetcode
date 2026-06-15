class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>delta(nums.size()+1,0);
        for(auto&q:queries){
            int l=q[0];
            int r=q[1];
            delta[l]++;
            delta[r+1]--;
        }
        vector<int>newdelta(nums.size());
        newdelta[0]=delta[0];
        for(int i=1;i<nums.size();i++){
            newdelta[i]=newdelta[i-1]+delta[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]-=newdelta[i];
            if(nums[i]>0)
            return false;
        }
        return true;
    }
};