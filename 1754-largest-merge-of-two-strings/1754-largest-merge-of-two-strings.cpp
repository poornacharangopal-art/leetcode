class Solution {
public:
    string largestMerge(string word1, string word2) {
        string ans="";
        int i=0,j=0;
        while(i<word1.size()&&j<word2.size()){
            int n1=(int)word1[i];
            int n2=(int)word2[j];
            if(n1>n2){
                ans+=word1[i];
                i++;
            }
            else if(n1<n2){
                ans+=word2[j];
                j++;
            }
            else{
                int k1=i,k2=j;
                bool decided=false;
                while(k1<word1.size()&&k2<word2.size()){
                    if(word1[k1]!=word2[k2]){
                        if(word1[k1]>word2[k2]){
                            ans+=word1[i];
                            decided=true;
                            i++;
                            break;
                        }
                        else{
                            ans+=word2[j];
                            decided=true;
                            j++;
                            break;
                        }
                    }
                    k1++;
                    k2++;
                }
                  if (!decided) {
                    if (k1 < word1.size()) {
                        ans += word1[i];
                        i++;
                    }
                    else {
                        ans += word2[j];
                        j++;
                    }
                }
            }
        }
        while(i<word1.size()){
            ans+=word1[i];
            i++;
        }
        while(j<word2.size()){
            ans+=word2[j];
            j++;
        }
        return ans;
    }
};