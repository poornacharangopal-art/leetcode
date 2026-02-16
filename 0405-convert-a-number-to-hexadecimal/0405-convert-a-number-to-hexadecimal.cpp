class Solution {
public:
    string toHex(int num) {
        std::string s="";
        if(num==0){
            char ch='/0'+0;
            s+=ch;
            return s;
        }
        unsigned int num1;
         num1=(unsigned)num;
        while(num1>0){
            int i=num1%16;
            num1=num1/16;
            if(i<10){
                char c='0'+i;
                s+=c;
            }
            else if(i==10){
                s+='a';
            }
            else if(i==11){
                s+='b';
            }
            else if(i==12){
                s+='c';
            }
            else if(i==13){
                s+='d';
            }
            else  if(i==14){
                s+='e';
            }
            else if(i==15){
                s+='f';
            }
        }
        reverse(s.begin(),s.end());
        return s;   
    }
};