class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        long long l=s;
        if(n%2==0){
            int t=n/2;
            int p=(n-2)/2;
            l+=(long long)t*m-p*1;
        }
        else if(n==1){
            return l;
        }
        else{
            int t=(n-1)/2;
            int p=(n-3)/2;
            l+=(long long)t*m-p*1;
        }
        return l;
    }
};