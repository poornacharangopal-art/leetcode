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
    bool backtrack(ListNode*root,TreeNode*head){
        if(head==NULL){
            return false;
        }
        if(root->next==NULL){
            if(root->val==head->val)
            return true;
        }
        if(root->val==head->val){
            return backtrack(root->next,head->left)||backtrack(root->next,head->right);
        }
        return false;
    }
    bool isok(ListNode*root,TreeNode*head){
        if(head==NULL){
            return false;
        }
        if(root->val==head->val){
            if(backtrack(root,head)){
                return true;
            }
        }
        return isok(root,head->left)||isok(root,head->right);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(isok(head,root)){
            return true;
        }
        return false;
    }
};