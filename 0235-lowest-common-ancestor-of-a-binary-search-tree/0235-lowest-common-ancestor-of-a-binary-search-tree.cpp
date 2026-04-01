/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* temp=root;
        int largest=max(p->val,q->val);
        int small=min(p->val,q->val);
        if(temp->val<=largest&&temp->val>=small){
            return temp;
        }
        if(root->val>largest&&root->val>small){
            return lowestCommonAncestor(root->left,p,q);
        }
        if(root->val<largest&&root->val<small){
            return lowestCommonAncestor(root->right,p,q);
        }
        return NULL;
    }
};