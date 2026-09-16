class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
       int i=2;
       int count=10;
       while(i<=n){
        int n1=9;
        int k=10;
        for(int j=1;j<i;j++){
            k--;
            n1*=k;
        }
        count+=n1;
        i++;
       } 
       return count;
    }
};