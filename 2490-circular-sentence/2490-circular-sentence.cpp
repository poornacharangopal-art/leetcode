class Solution {
public:
    bool isCircularSentence(string sentence) {
        int count=0;
        if(sentence[0]!=sentence[sentence.size()-1]){
                return false;
            }
        for(int i=1;i<sentence.size();i++){
            if(sentence[i]==' '){
                count++;
                if(sentence[i-1]!=sentence[i+1]){
                    return false;
                }
            }
        }
        if(count==0){
            if(sentence[0]!=sentence[sentence.size()-1]){
                return false;
            }
        }
        return true;
    }
};