class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>p;
        vector<int>digit;
        int num,l=1;
        for(int i=digits.size()-1;i>=0;i--){
            if(i!=0){
            if(digits[i]==9&&l==1){
                num=digits[i]+l;
                p.push_back(0);
                l=1;
            }
            else{
                num=digits[i]+l;
                p.push_back(num);
                l=0;
            }
            }
            else{
            if(digits[0]==9&&l==1){
                p.push_back(0);
                p.push_back(1);
            }
            else{
                num=digits[i]+l;
                p.push_back(num);
            }
            }
        }
        reverse(p.begin(),p.end());
        return p;

    }
};