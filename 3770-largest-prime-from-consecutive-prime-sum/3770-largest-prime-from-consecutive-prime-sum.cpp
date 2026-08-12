class Solution {
public:
    bool isprime(int n){
        if(n==2)return true;
        if(n==1)return false;
        for(int i=2;i<=n/2;i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    int largestPrime(int n) {
        if(n==1)return 0;
        int ans=2,m=3,sum=2;
        while(sum+m<=n){
            if(isprime(m)){
                sum+=m;
                if(isprime(sum)) ans=sum;
            }
            m+=2;
        }
        return ans;
    }
};