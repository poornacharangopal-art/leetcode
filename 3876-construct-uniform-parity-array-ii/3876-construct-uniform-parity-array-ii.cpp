class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini=INT_MAX;
        int odds=0,evens=0;
        for(int i=0;i<nums1.size();i++){
            mini=min(mini,nums1[i]);
            if(nums1[i]%2==0){
                evens++;
            }
            else{
                odds++;
            }
        }
        if(evens==nums1.size()||odds==nums1.size()){
            return true;
        }
        if(mini%2==0){
            return false;
        }
        return true;
    }
};