class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
       int i=0,j=0;
       int r=0,l=0,u=0,d=0;
       for(int i=0;i<commands.size();i++){
        if(commands[i]=="RIGHT")r++;
        else if(commands[i]=="LEFT")l++;
        else if(commands[i]=="DOWN")d++;
        else u++;
       }
       j=r-l;
       i=d-u;

       return (i*n)+j;
    }
};