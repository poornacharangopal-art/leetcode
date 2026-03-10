class Solution {
public:
    int myAtoi(string s) {
         string s1="";
        int i=0;
        int count=0;
        int signs=0;
        while(i<s.size()){
            if(i==0&&s[i]==' '){                
            while(i<s.size()-1&&s[i]==' '){
                    i++;
                }
            }
                if(s[i]=='+'||s[i]=='-'){
                    signs+=1;
                }
                if(s1==""&&(s[i]=='+'||s[i]=='-')&&count==0){
                    s1+=s[i];
                    i++;
                    continue;
                }
                else if(s1==""&&(s[i]=='+'||s[i]=='-')&&count!=0){
                    return 0;
                }
                else if(s[i]=='0'&&(s1==""||s1=="+"||s1=="-")){
                    i++;
                    count++;
                    continue;
                }
                else if(isdigit(s[i])){
                    s1+=s[i];
                }
                else{
                    break;
                }
                if(signs>1&&(s1=="+"||s1=="-")){
                    return 0;
                }
                i++;
        }
       long long num=0;
       int sign=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='+'){
                sign=0;;
            }
            else if(s1[i]=='-'){
                sign=1;
            }
            else{
            num=num*10+(s1[i]-'0');
            }
             if(sign==1&&num>INT_MAX){
                return INT_MIN;
            }
            if(num>INT_MAX){
                return INT_MAX;
            }
        }
        if(sign==1){
            return -num;
        }
        return num;
    }
};