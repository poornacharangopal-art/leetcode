/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root;
        if(nums.size()==0){
            return NULL;
        }
        int mid;
            mid=nums.size()/2;
        root=new TreeNode(nums[mid]);
        vector<int>v(nums.begin(),nums.begin()+mid);
        root->left=sortedArrayToBST(v);
        vector<int>v1(nums.begin()+mid+1,nums.end());
        root->right=sortedArrayToBST(v1);
        return root;
    }
};