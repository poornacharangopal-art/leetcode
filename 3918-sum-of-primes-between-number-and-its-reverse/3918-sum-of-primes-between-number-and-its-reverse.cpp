class Solution {
public:
    int reverse(int n){
        int number=0;
        while(n>0){
            int i=n%10;
            number=number*10+i;
            n=n/10;
        }
        return number;
    }
    bool isprime(int n){
        if(n==1){
            return false;
        }
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int sum=0;
        int m=reverse(n);
        int maxi=max(n,m);
        int mini=min(n,m);
        for(int i=mini;i<=maxi;i++){
            if(isprime(i)){
                sum+=i;
            }
        }
        return sum;
    }
};