class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minu=minutes*(double)6;
        double hou=(hour%12)*(double)30+(minutes)*(double)0.5;
        double ans=abs(hou-minu);
        if(ans>180){
            ans=(double)360-ans;
        }
        return ans;
    }
};