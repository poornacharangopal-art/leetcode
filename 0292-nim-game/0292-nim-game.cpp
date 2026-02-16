class Solution {
public:
    bool canWinNim(int n) {
        bool winner=false;
        if(n%4==0){
            return false;
        }
        return true;
    }
};