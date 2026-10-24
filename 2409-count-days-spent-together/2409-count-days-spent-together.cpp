
class Solution {
public:
    int date(string s) {
        int count = 0;
        int month = (s[0] - '0') * 10 + (s[1] - '0');
        int day = (s[3] - '0') * 10 + (s[4] - '0');
        for(int i = 1; i < month; i++){
            count += 31;
            if (i == 4 || i == 6 || i == 9 || i == 11) count -= 1;
            else if (i == 2) count -= 3;
        }
        return count + day;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aliceSt = date(arriveAlice);
        int aliceEnd = date(leaveAlice);
        int bobSt = date(arriveBob);
        int bobEnd = date(leaveBob);
        int start = max(aliceSt, bobSt);
        int end = min(aliceEnd, bobEnd);
        return max(0, end - start + 1);
    }
};