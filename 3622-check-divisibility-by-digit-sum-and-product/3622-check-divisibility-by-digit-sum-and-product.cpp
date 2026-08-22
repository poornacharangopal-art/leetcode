class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum=0,product=1;
        int a=n;
        while(n>0){
            sum+=n%10;
            product*=n%10;
            n=n/10;
        } 
        long long ans=sum+product;
        if(a%ans==0){
            return true;
        }
        return false;
        }
};