class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum=0;
        for(int i=0;i<columnTitle.length();i++){
            int j=(int)columnTitle[i]-64;
            sum=sum*26+j; 
        }
        return sum;
    }
};