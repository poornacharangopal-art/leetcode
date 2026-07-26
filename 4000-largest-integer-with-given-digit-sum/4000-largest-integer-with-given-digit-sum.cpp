class Solution {
public:
    int largestInteger(int n, int s) {
        int ans=0;
        if(s>9*n){
            return -1;
        }
        else if(s==0){
            return 0;
        }
        else{
            while(n!=0){
                if(s>=9){
                    ans=ans*10+9;
                    s-=9;
                }
                else{
                    ans=ans*10+s;
                    s-=s;
                }
                n--;
            }
        }
        return ans;
    }
};