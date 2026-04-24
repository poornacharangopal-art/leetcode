class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a=nums[0],b=nums[1],c=nums[2];
        string s;
        if(nums[0]+nums[1]<=nums[2]||nums[1]+nums[2]<=nums[0]||nums[0]+nums[2]<=nums[1]){
            s="none";
        }
        else if(a==b&&a==c){
            s="equilateral";
        }
        else if((a==b&&b!=c)||(a!=b&&b==c)||(a==c&&c!=b)){
            s="isosceles";
        }
        else{
            s="scalene";
        }
        return s;
    }
};