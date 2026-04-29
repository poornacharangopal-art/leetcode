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
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL&&root->right==NULL){
            return 1;
        }
        queue<TreeNode*>q;
        int count=1;
        q.push(root);
        while(!q.empty()){
            bool isit=false;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                if(!isit){
                    if(temp->left!=NULL||temp->right!=NULL){
                        isit=true;
                        count+=1;
                    }
                    if(temp->left!=NULL){
                        q.push(temp->left);
                    }
                    if(temp->right!=NULL){
                        q.push(temp->right);
                    }
                }
                else{
                     if(temp->left!=NULL){
                        q.push(temp->left);
                    }
                    if(temp->right!=NULL){
                        q.push(temp->right);
                    }
                }
            }
        }
        return count;
    }
};