class Solution {
public:
    bool canAliceWin(int n) {
        int a=10;
        long long count=0;
        while(n>=a){
            count++;
            n-=a;
            a--;
        }
        if(count%2)
        return true;
        return false;
    }
};