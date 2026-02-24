class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> p;
        int min=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
              vector<int>s;
            int diff=arr[i+1]-arr[i];
            if(i==0&&diff<min){
                min=diff;
                s.push_back(arr[i]);
                s.push_back(arr[i+1]);
                p.push_back(s);
            }
            else if(diff<min){
                min=diff;
                p.clear();
                s.push_back(arr[i]);
                s.push_back(arr[i+1]);
                p.push_back(s);
            }
            else if(diff==min){
                s.push_back(arr[i]);
                s.push_back(arr[i+1]);
                p.push_back(s);   
            }
        }
        return p;
    }
};