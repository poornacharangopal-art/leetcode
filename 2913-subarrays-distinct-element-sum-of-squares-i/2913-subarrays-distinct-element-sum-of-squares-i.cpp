class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int i=0,j=0;
        int sum=0;
        while(j<nums.size()){
            set<int>s(nums.begin()+i,nums.begin()+j+1);
            sum+=s.size()*s.size();
            if(j==nums.size()-1){
                i++;
                j=i;
                continue;
            }
            j++;
        }
        return sum;
    }
};