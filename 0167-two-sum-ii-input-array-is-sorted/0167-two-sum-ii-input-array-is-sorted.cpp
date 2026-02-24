class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>p(2,0);
        int i=0;
        while(i<numbers.size()-1){
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]+numbers[j]==target){
                    p[0]=i+1;
                    p[1]=j+1;
                    break;
                }
                else if(numbers[i]+numbers[j]>target||j==numbers.size()-1){
                    break;
                }
            }
            if(numbers[i]==numbers[i+1]){
                i=i+1;
                while(i!=0&&i<numbers.size()-1&&numbers[i]==numbers[i-1]){
                    i++;
                }
            }
            else{
            i++;
            }
        }
        return p; 
    }
};