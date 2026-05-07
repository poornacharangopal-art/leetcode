class Solution {
public:
    bool isBalanced(string num) {
        int esum=0,osum=0;
        for(int i=0;i<num.size();i++){
            int a=num[i]-'0';
            if(i%2==0)
            esum+=a;
            else
            osum+=a;
        }
        if(esum==osum){
            return true;
        }
        return false;
    }
};