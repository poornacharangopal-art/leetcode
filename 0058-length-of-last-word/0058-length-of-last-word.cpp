class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,count1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                count+=1;
            }
            if(i!=s.size()-1&&s[i]==' '&&s[i+1]!=' '){
                count1+=1;
            }
        }
        int k=0;
        int l=0;
        int i=0;
        int m=0;
        while(m!=count1){
            l++;
            if(s[i]==' '){
                k++;
            }
            if(i!=s.size()-1&&s[i]==' '&&s[i+1]!=' '){
                m++;
            }
            i++;
        }

        return s.size()-l-(count-k);
    }
};