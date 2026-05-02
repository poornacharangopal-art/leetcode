class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int j=1;j<=n;j++){
             bool isnum=false;
            bool valid=true;
            int k=j;
        while(k>0){
            int i=k%10;
            if(i==2||i==5||i==6||i==9){
                isnum=true;
            }
            if(i==3||i==4||i==7){
                valid=false;
            }
            k=k/10;
        }
        if(isnum&&valid){
            count++;
        }
        }
        return count;
    }
};