class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1==num2&&num1=="0"){
            string s1="0";
            return s1;
        }
        string s="";
        int l1=num1.length();
        int l2=num2.length();
         int l=0;
        if(l1>l2){
             for(int i=l1-1;i>=0;i--){
                int sum=l;
                int n=num1[i]-'0';
                int j=i-l1+l2;
                if(j>=0){
                int m=num2[j]-'0';
                  sum+=n+m;
                }
                else{
                   sum+=n;
                }
                if(i==0&&sum>=10){
                    string s1=to_string(sum);
                    reverse(s1.begin(),s1.end());
                    s+=s1;
                }
                else{
                if(sum>=10){
                    sum=sum-10;
                    l=1;
                }
                else{
                    l=0;
                }
                s+=to_string(sum);
                }
            }
        }
        else if(l1<l2){
            for(int i=l2-1;i>=0;i--){
               int sum=l;
                int n=num2[i]-'0';
               int j=i-l2+l1;
                if(j>=0){
                int m=num1[j]-'0';
                sum+=n+m;
                }
                else{
                 sum+=n;
                }
                 if(i==0&&sum>=10){
                    string s1=to_string(sum);
                    reverse(s1.begin(),s1.end());
                    s+=s1;
                }
                else{
                if(sum>=10){
                    sum=sum-10;
                    l=1;
                }
                else{
                    l=0;
                }
                s+=to_string(sum);
            }
          
        }
        }
        else if(l1==l2){
            for(int i=l1-1;i>=0;i--){
                int sum=l;
                int n=num1[i]-'0';
                int m=num2[i]-'0';
                sum+=n+m;
                 if(i==0&&sum>=10){
                    string s1=to_string(sum);
                    reverse(s1.begin(),s1.end());
                    s+=s1;
                }
                else{
                if(sum>=10){
                    sum=sum-10;
                    l=1;
                }
                   else{
                    l=0;
                }
                s+=to_string(sum);
                }
                
            }
           
        }
        reverse(s.begin(),s.end());
        return s;
    }


}; 