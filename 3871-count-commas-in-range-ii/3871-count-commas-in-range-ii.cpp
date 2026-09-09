class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000){
            return 0;
        }
        else if(n>=1000&&n<999999){
            long long i=n-1000;
            return i+1;
        }
        else{
            long long i;
            int j=3;
            long long sum=0;
            while(n>=pow(10,j)){
                if(j%3==0){
                i=n-pow(10,j)+1;
                i=i*1;
                sum+=i;
            }
                j++;
            }
            return sum;
        }
        return 0;
    }
};