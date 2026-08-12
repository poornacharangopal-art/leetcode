class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        if(num==1||num==0)return false;
        for(int i=1;i<=sqrt(num);i++){
            if(num%i==0){
            sum+=i;
            if (i!=1&&i != num / i)
                    sum += num / i;
            }
            }
        if(sum==num)return true;
        return false;
    }
};