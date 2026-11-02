class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>list(wordList.begin(),wordList.end());
        if(list.find(endWord)==list.end())return 0;
        queue<string>q;
        q.push(beginWord);
         list.erase(beginWord);
        int count=0;
        while(!q.empty()){
            int n=q.size();
            count++;
            while(n--){
                string s=q.front();
                q.pop();
                if(s==endWord){
                    return count;
                }
                for(int i=0;i<s.size();i++){
                    for(int j=0;j<26;j++){
                        string s1=s;
                        char c='a'+j;
                        s1[i]=c;
                        if(list.find(s1)!=list.end()){
                            q.push(s1);
                            list.erase(s1);
                        }
                    }
                }
            }
        }
        return 0;
    }
};