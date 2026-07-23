class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=(arr.size( )-1)/2;
        int m=arr[n];
        sort(arr.begin(),arr.end(),[&](int a,int b){
             if (abs(a - m) != abs(b - m))
        return abs(a - m) > abs(b - m);
    return a > b;
        });
        vector<int>ans(arr.begin(),arr.begin()+k);
        return ans;
    }
};