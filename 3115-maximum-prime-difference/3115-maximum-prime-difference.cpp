class Solution {
public:
    bool isprime(int n){
        if(n==1)return false;
        if(n==2){
            return true;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int mini=nums.size();
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(isprime(nums[i])){
                mini=min(mini,i);
                maxi=max(maxi,i);
        }
    }
    if(maxi-mini==nums.size())return 0;
    return maxi-mini;
    }
    };