class Solution {
public:
    int one(int n){
        int ones=0;
        while(n!=0){
            int i=n%2;
            if(i==1){
                ones++;
            }
            n=n/2;
        }
        return ones;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[&](int a,int b){
            int x=one(a);
            int y=one(b);
            if(x==y){
                return a<b;
            }
            else{
                return x<y;
            }
        });
        return arr;
    }
};