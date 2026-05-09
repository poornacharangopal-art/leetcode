class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        deque<int>dq;
        vector<long long>v(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            v[i+1]=v[i]+nums[i];
        }
        int m=INT_MAX;
        for(int i=0;i<=nums.size();i++){
            while(!dq.empty()&&v[i]-v[dq.front()]>=k){
                m=min(m,i-dq.front());
                dq.pop_front();
            }
            while(!dq.empty()&&v[i]<=v[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        return (m==INT_MAX)?-1:m;
    }
};