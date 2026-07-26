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
    bool isDominent(TreeNode*root,int val){
        if(!root)
        return true;
        if(root->val>val){
            return false;
        }
        return isDominent(root->left,val)&&isDominent(root->right,val);
    }
    int countDominantNodes(TreeNode* root) {
        queue<TreeNode*>q;
        TreeNode*temp=root;
        int count=0;
        q.push(temp);
        while(!q.empty()){
            TreeNode*temp1=q.front();
            q.pop();
            if(isDominent(temp1->left,temp1->val)&&isDominent(temp1->right,temp1->val)){
                count++;
            }
            if(temp1->left){
                q.push(temp1->left);
            }
             if(temp1->right){
                q.push(temp1->right);
            }
        }
        return count;
    }
};