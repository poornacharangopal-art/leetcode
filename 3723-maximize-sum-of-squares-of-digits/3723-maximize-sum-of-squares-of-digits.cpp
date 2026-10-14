class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
         string s="";
         int count=0;
         if(sum>num*9){
            return "";
         }
         while(count!=num){
            int n;
            if(sum<9){
                n=sum;
            }
            else{
                n=9;
            }
            sum-=n;
            s+=to_string(n);
            count++;
         }
         return s;
    }
};