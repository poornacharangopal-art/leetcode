class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            for(int i=0;i<s.size();i++){
                int n=s[i]-'0';
                v.push_back(n);
            }
        }
        return v;
    }
};