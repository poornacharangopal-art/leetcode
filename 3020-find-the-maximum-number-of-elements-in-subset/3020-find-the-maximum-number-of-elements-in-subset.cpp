class Solution {
public:
    int maximumLength(vector<int>& nums) {
        const long long LIMIT = 3037000499LL;
        unordered_map<int,int>mp;
        int ans=1;
        for(int x:nums){
            mp[x]++;
        }
        if(mp.count(1)){
            int cnt=mp[1];
            ans=max(ans,cnt%2?cnt:cnt-1);
        }
         for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                continue;
            }
            int count=0;
            long long x=nums[i];
            while(mp.find(x)!=mp.end()&&mp[x]>=2){
                count+=2;
                if(x>=LIMIT)
                break;
                x*=x;
            }
            if(mp.find(x)!=mp.end()&&mp[x]<2){
                count+=1;
            }
            else{
                count-=1;
            }
            ans=max(ans,count);
         }
         return ans;
    }
};