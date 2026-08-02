class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        if(n==1){
            return (double)1;
        }
        double prob=1/(double)2;
        return prob;
    }
};