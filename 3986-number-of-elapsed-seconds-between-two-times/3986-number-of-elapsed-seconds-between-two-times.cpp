class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
       string sh=startTime.substr(0,2);
       string sm=startTime.substr(3,2);
       string ss=startTime.substr(6,2);
       int seconds1=stoi(sh)*3600+stoi(sm)*60+stoi(ss);
       string eh=endTime.substr(0,2);
       string em=endTime.substr(3,2);
       string es=endTime.substr(6,2);
       int seconds2=stoi(eh)*3600+stoi(em)*60+stoi(es);
       return seconds2-seconds1;
    }
};