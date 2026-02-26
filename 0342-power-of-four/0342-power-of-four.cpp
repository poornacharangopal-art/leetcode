class Solution {
public:
    bool isPowerOfFour(int n) {
        bool poweroffour=false;
        while(n>=1){
            if(n!=1&&n%4!=0){
                return false; 
            }
            else if(n==1){
                return true;
            }
            n=n/4;
        }
        return poweroffour;
    }
};