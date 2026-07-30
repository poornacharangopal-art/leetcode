class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int pushes=0;
        if(n<8){
            return n;
        }
        int i=1;
        if(n>24){
            pushes=8*1+8*2+8*3+(n-24)*4;
            return pushes;
        }
        while(n){
            if(n>8){
            pushes+=8*i;
            n=n-8;
            }
            else{
                pushes+=n*i;
                n=0;
            }
            i++;
        }
        return pushes;
    }
};