class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left=0;
        long long right=sqrt(c);
        while(left<=right){
            long long value=left*left+right*right;
            if(value==c){
                return true;
            }
            else if(value>c){
                right--;
            }
            else if(value<c){
                left++;
            }
        }
        return false;
    }
};