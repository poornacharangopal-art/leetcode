class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>nums=arr;
        sort(arr.begin(),arr.end());
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            if(mp.count(arr[i]))continue;

            mp[arr[i]]=mp.size()+1;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(mp[nums[i]]);
        }
        return ans;
    }
};