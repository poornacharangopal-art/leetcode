class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>v;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                v.pop_back();
            }
            else if(operations[i]=="D"){
                int a=v[v.size()-1]*2;
                v.push_back(a);
            }
            else if(operations[i]=="+"){
                int a=v[v.size()-1]+v[v.size()-2];
                v.push_back(a);
            }
            else{
                int a=stoi(operations[i]);
                v.push_back(a);
            }
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        return sum;
    }
};