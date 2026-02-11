class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>p(2,-1);
        sort(nums.begin(),nums.end());
        int low=0,mid=0;
        int high=nums.size()-1;
        int i=0;
        if(low==high){
            if(nums[0]==target){
                p[0]=low;
                p[1]=low;
            }
            return p;
        }
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                if(mid!=0&&nums[mid]!=nums[mid-1]){ 
                    p[0]=mid;
                    while(mid<nums.size()&&nums[mid]==target){
                        mid++;
                    } 
                    p[1]=mid-1;             
                }
                else if(mid==0){
                      p[0]=mid;
                    while(mid<nums.size()&&nums[mid]==target){
                        mid++;
                    } 
                    p[1]=mid-1;

                }
                else{
                    while(mid>0&&nums[mid]==nums[mid-1]){
                    mid--;
                    }
                    p[0]=mid;
                     while(mid<nums.size()&&nums[mid]==target){
                        mid++;
                    } 
                    p[1]=mid-1;   
                }
                break;
            }
            else if(target<nums[mid]){
                high--;
            }
            else if(target>nums[mid]){
                low++;
            }
        }
        return p;
    }
};