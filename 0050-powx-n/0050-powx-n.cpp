class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        long long i=abs((long long)n);
         if(n==0){
            return 1;
        }
        while(i>0){
            if(i%2==1){
                result=result*x;
            }
            x=x*x;
            i=i/2;
        }
        if(n<0){
            result=1/result;
        }
        return result;
    }
};