class Solution {
public:
    int digitsum(int num){
        int sum=0;
        while(num!=0){
            int i=num%10;
            num=num/10;
            sum+=i;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        for(int i=lowLimit;i<=highLimit;i++){
            int sum=digitsum(i);
            mp[sum]++;
        }
        int max=0;
        for(auto&p:mp){
            if(p.second>max){
                max=p.second;
            }
        }
        return max;
    }
};