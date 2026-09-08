class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        else{
            int i=n-1000;
            return i+1;
        }
        return 0;
    }
};