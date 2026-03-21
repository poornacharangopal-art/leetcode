/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* Binary(vector<int>nums){
        TreeNode*root;
        if(nums.size()==0){
            return NULL;
        }
        int mid=nums.size()/2;
        root=new TreeNode(nums[mid]);
        vector<int>v1(nums.begin(),nums.begin()+mid);
        vector<int>v2(nums.begin()+mid+1,nums.end());
        root->left=Binary(v1);
        root->right=Binary(v2);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        TreeNode*h;
        h=Binary(v);
        return h;
    }
};