class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=1,index,min=0;
        vector<int> p(k,0);
        int j=0;
        while(j<k){
            for(int i=0;i<nums.size();i++){
                int l=i+1;
                while(l<nums.size()){
                    if(nums[i]!=nums[l]){
                        break;
                    }
                    else{
                        count+=1;
                        l++;
                    }
                }
                if(count>min){
                    min=count;
                    index=i;
                }
                count=1;
                i=l-1;
            }
            p[j]=nums[index];
            nums.erase(nums.begin()+index,nums.begin()+index+min);
            count=1;
            min=0;
            j++;
        }
        return p;
    }
};