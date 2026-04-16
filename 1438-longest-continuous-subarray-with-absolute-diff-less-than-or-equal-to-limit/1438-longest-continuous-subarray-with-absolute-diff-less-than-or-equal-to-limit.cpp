class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int>dqmax,dqmin;
        int i=0;
        int ans=0;
        for(int j=0;j<nums.size();j++){
            while(!dqmax.empty()&&nums[dqmax.back()]<nums[j]){
                dqmax.pop_back();
            }
            dqmax.push_back(j);
            while(!dqmin.empty()&&nums[dqmin.back()]>nums[j]){
                dqmin.pop_back();
            }
            dqmin.push_back(j);
            while(nums[dqmax.front()]-nums[dqmin.front()]>limit){
                if(dqmax.front()==i){
                    dqmax.pop_front();
                }
                if(dqmin.front()==i){
                    dqmin.pop_front();
                }
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};