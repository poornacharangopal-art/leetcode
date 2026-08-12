class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        vector<int>missing;
        for(int i=0;i<nums.size();i++){
            int m=missing.size();
            if(i==0){
                int n=nums[0];
                n--;
                while(n>0){
                    missing.push_back(n);
                    n--;
                }
            }
            else{
                int n=nums[i];
                n--;
                while(n!=nums[i-1]){
                    missing.push_back(n);
                    n--;
                }
            }
            reverse(missing.begin()+m,missing.end());
        }
        if(k>missing.size()){
            return nums[nums.size()-1]+k-missing.size();
        }
        return missing[k-1];
    }
};