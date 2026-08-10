class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        ans.insert(ans.begin(),nums.begin(),nums.end());
        ans.insert(ans.begin()+n,nums.begin(),nums.end());
        return ans;
    }
};