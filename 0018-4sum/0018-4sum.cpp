class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v;
        vector<int>v1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            long long  value=(long long)target-nums[i];
            int start,end;
            for(int j=i+1;j<nums.size()-1;j++){
                start=j+1;
                end=nums.size()-1;
                while(start<end){
                    long long  sum=(long long)nums[start]+nums[end]+nums[j];
                    if(sum==value){
                        v1.push_back(nums[i]);
                        v1.push_back(nums[j]);
                        v1.push_back(nums[start]);
                        v1.push_back(nums[end]);
                        v.push_back(v1);
                        v1.clear();
                        start++;
                        end--;
                    }
                    else if(sum<value){
                        start++;
                    }
                    else if(sum>value){
                        end--;
                    }
                }
            }
        }
        int i=v.size()-1;
        sort(v.begin(),v.end());
        while(i>=0){
            while(i!=0&&v[i]==v[i-1]){
                v.erase(v.begin()+i);
                i--;
            }
            i--;
        }
        return v;
    }
};