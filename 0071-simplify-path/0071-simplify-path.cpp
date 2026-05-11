class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string curr;
        for(int i=0;i<=path.size();i++){
            if(i==path.size()||path[i]=='/'){
                if(curr=="."||curr==""){
                    curr="";
                    continue;
                }
                else if(curr==".."){
                    if(!st.empty())
                    st.pop();
                }
                else{
                st.push(curr);
                }
                curr="";
            }
            else{
                curr+=path[i];           
            }
        }
        vector<string>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        string result="";
        for(int i=ans.size()-1;i>=0;i--){
            result+="/"+ans[i];
        }
        return (result=="")?"/":result;
    }
};