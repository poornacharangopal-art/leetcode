class Solution {
public:
    int digitrange(int num){
        int maxi=0;
        int mini=INT_MAX;
        while(num>0){
            int i=num%10;
            maxi=max(maxi,i);
            mini=min(mini,i);
            num=num/10;
        }
        return maxi-mini;
    }
    int maxDigitRange(vector<int>& nums) {
        vector<vector<int>>v;
        for(int i=0;i<nums.size();i++){
            int n=digitrange(nums[i]);
            vector<int>v1;
            v1.push_back(n);
            v1.push_back(nums[i]);
            v.push_back(v1);
        }
        sort(v.rbegin(),v.rend());
        int num=v[0][1];
        for(int i=1;i<v.size();i++){
            if(v[i][0]==v[0][0]){
                num+=v[i][1];
            }
            else
            break;
        }
        return num;
    }
};