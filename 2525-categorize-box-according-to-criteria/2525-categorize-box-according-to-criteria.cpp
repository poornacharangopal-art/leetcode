 class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
       long long volume=(long long)length*width*height;
       bool isheavy=false;
       bool isbulky=false;
       if(volume>=1e9||(length>=1e4||height>=1e4||width>=1e4)){
        isbulky=true;
       }
       if(mass>=100){
        isheavy=true;
       }
       if(isbulky&&isheavy){
        return "Both";
       }
       if(isbulky){
        return "Bulky";
       }
       if(isheavy){
        return "Heavy";
       }
        return "Neither";
    }
};