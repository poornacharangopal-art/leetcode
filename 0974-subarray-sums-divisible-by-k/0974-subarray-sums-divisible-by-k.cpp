class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>preffix;
        int sum=0;
        preffix.push_back(sum);
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            preffix.push_back(sum);
        }
        int count=0;
        for(int num:preffix){
            int rem=((num%k)+k)%k;
            count+=mp[rem];
            mp[rem]++;
        }
       return count;
    }
};