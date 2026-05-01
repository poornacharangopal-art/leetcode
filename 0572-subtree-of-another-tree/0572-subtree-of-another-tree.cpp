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
   bool isequal(TreeNode*root,TreeNode*subroot){
    if(root==NULL&&subroot==NULL)
    return true;
    if(root==NULL||subroot==NULL)
    return false;
    if(root->val!=subroot->val)
    return false;
    return isequal(root->left,subroot->left)&&isequal(root->right,subroot->right);
   }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            if(isequal(temp,subRoot)){
                return true;
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        return false;
    }
};