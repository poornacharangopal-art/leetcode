class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int sum=0;
       int k=1;
       while(k<=arr.size()){
        vector<int>v(arr.begin(),arr.begin()+k);
        int sum1=0;
        for(int x:v){
            sum1+=x;
        }
        sum+=sum1;
        for(int i=k;i<arr.size();i++){
            sum1-=v[0];
            sum1+=arr[i];
            v.push_back(arr[i]);
            v.erase(v.begin());
            sum+=sum1;
        }
        k=k+2;
       } 
       return sum;
    }
};