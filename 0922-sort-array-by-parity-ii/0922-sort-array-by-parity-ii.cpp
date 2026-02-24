class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>p(nums.size());
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                 odd.push_back(nums[i]);
            }
        }
        int o=0,e=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0&&e<even.size()){
                p[i]=even[e];
                e++;
            }
            else if(i%2!=0&&o<odd.size()){
                p[i]=odd[o];
                o++;
            }
        }
        return p; 
    }
};