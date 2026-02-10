class Solution {
public:
    bool isUgly(int n) {
        bool ugly=true;
        if(n<=0){
            ugly=false;
            return ugly;
        }
        while(n>1){
            if(n%2==0){
                n=n/2;
            }
            else if(n%3==0){
                n=n/3;
            }
            else if(n%5==0){
                n=n/5;
            }
            else{
                ugly=false;
                break;
            }
        }
        return ugly;

    }
};