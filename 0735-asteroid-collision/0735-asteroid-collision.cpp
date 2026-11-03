class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int>st;
        for(int i=0;i<nums.size();i++){
            int k=1;
        while(!st.empty()){
            int val=st.top();
            if(val>0&&val*nums[i]<0){
                if(abs(nums[i])>val){
                    st.pop();
                }
                else if(abs(nums[i])==val){
                    st.pop();
                    k=0;
                    break;
                }
                else{
                    k=0;
                    break;
                }
            }
            else{
                break;
            }
        }
        if(k==1){
            st.push(nums[i]);
        }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};