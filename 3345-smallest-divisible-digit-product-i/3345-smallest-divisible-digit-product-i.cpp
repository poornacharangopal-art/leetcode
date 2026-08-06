class Solution {
public:
    int prod(int n){
        int ans=1;
        while(n>0){
            int i=n%10;
            n=n/10;
            ans*=i;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        bool isok=false;
        while(!isok){
            int pro=prod(n);
            if(pro%t==0){
            isok=true;
            break;
            }
            n++;
        }
        return n;
    }
};