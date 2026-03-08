class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string s="";
        int k;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int dec=stoi(nums[i],0,2);
            if(dec!=i){
                k=i;
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            s+=to_string(k%2);
            k=k/2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};