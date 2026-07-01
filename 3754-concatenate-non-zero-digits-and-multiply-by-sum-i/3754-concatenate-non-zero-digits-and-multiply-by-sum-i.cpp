class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0,num=0;
        while(n>0){
            int i=n%10;
            if(i!=0){
                sum+=i;
                num=num*10+i;
            }
            n=n/10;
        }
        string s=to_string(num);     
        reverse(s.begin(),s.end());
        int nums=stoi(s);
        long long ans=(long long)nums*sum;
        return ans;
    }
};