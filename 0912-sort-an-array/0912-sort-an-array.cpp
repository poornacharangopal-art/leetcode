class Solution {
public:
    void heapify(vector<int>&nums,int n,int i){
        int value=nums[i];
        int left=2*i+1;
        int right=2*i+2;
        int largest=i;
        if(left<n&&nums[largest]<nums[left])largest=left;
        if(right<n&&nums[largest]<nums[right])largest=right;
        if(largest!=i){
            int temp=nums[largest];
            nums[largest]=nums[i];
            nums[i]=temp;
            heapify(nums,n,largest);
        }
    }
     void heapsort(vector<int>&nums,int n){
        for(int i=n/2-1;i>=0;i--){
            heapify(nums,n,i);
        }
        for(int i=n-1;i>=0;i--){
            int temp=nums[0];
            nums[0]=nums[i];
            nums[i]=temp;
            heapify(nums,i,0);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
    heapsort(nums,nums.size());
    return nums;
    }
};