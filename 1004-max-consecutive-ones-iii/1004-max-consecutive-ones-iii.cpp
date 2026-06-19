class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //your code goes here
        unordered_map<int,int>mp;
        mp[0]=0,mp[1]=0;
        int i=0,j=0;
        int ans=0;
        while(j<nums.size()){
            if(nums[j]==0&&mp[0]==k){
                mp[0]++;
                ans=max(ans,j-i);
                while(i<nums.size()&&mp[0]>k){
                    mp[nums[i]]--;
                    i++;
                }
            }
            else{
                mp[nums[j]]++;
            }
            j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};