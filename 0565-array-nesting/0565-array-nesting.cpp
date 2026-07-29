class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int n=i;
            int count=0;
            while(n<nums.size()){
                int num=nums[n];
                if(mp.find(num)!=mp.end())
                break;
                n=nums[n];
                mp[num]++;
                count++;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};