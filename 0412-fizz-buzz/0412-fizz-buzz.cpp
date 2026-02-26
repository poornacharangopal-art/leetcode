class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>p(n,"");
        for(int i=0;i<n;i++){
            if((i+1)%3==0&(i+1)%5==0){
                p[i]+="FizzBuzz";
            }
            else if((i+1)%3==0){
                p[i]+="Fizz";
            }
            else if((i+1)%5==0){
                p[i]+="Buzz";
            }
            else {
               
                p[i]+=to_string(i+1);
            }
        } 
        return p;  
    }
};