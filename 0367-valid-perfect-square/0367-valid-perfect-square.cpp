class Solution {
public:
    bool isPerfectSquare(int num) {
        bool sqr=false;
        if(num==1){
            sqr=true;
        }
        else{
        for(long long i=1;i*i<=num;i++){
            if(i*i==num){
                sqr=true;
                break;
            }
        }
        }
        return sqr;     
    }
};