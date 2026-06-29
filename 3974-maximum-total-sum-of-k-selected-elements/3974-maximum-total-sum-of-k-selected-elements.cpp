class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.rbegin(),nums.rend());
        vector<int>v(nums.begin(),nums.begin()+k);
        long long sum=0;
        for(int i=0;i<v.size();i++){
            long long m1=(long long)v[i];
            long long m2=(long long)v[i]*mul;
            sum=max(sum+m1,sum+m2);
            mul--;
        }
        return sum;
    }
};