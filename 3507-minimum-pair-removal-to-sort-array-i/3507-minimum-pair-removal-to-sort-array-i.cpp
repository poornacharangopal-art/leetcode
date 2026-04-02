class Solution {
public:
    vector<int> min(vector<int>num){
        int m,n,min=INT_MAX;
        for(int i=0;i<num.size()-1;i++){
            int sum=num[i]+num[i+1];
            if(sum<min){
                min=sum;
                m=i;
                n=i+1;
            }
        }
        num.erase(num.begin()+n);
        num.erase(num.begin()+m);
        num.insert(num.begin()+m,min);
        return num;
    }
    int minimumPairRemoval(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        int count=0;
        if(nums==v){
            return 0;
        }
        while(nums!=v){
            nums=min(nums);
            v=nums;
            sort(v.begin(),v.end());
            count++;
        }
        return count;
    }
};