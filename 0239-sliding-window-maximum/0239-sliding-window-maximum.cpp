class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        int i=0,j=0;
         vector<int>v;
        while(j<nums.size()){
            while(!dq.empty()&&dq.back()<nums[j]){
                dq.pop_back();
            }
            dq.push_back(nums[j]);
            if(j-i+1==k){
                v.push_back(dq.front());
                if(dq.front()==nums[i]){
                    dq.pop_front();
                }
                i++;
            }
            j++;
        }
        return v;

    }
};