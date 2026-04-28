class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
         vector<int>v;
         int maxfrequency=0;
         int ans=-1;
        for(int x:nums){
            if(x%2==0){
                mp[x]++;
                if(mp[x]>maxfrequency||(mp[x]==maxfrequency&&x<ans)){
                maxfrequency=mp[x];
                ans=x;
            }
            }
        }
        return ans;
    }
};