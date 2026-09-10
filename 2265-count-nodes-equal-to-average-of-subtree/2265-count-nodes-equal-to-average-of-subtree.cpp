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
    bool isok(TreeNode*root){
        int sum=0;
        int count=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*temp=q.front();
            q.pop();
            sum+=temp->val;
            count++;
            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
        int avg=sum/count;
        if(root->val==avg){
            return true;
        }
        return false;
    }
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        queue<TreeNode*>q;
        q.push(root);
         while(!q.empty()){
            TreeNode*temp=q.front();
            q.pop();
            if(isok(temp))
            count++;
            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
        return count;
    }
};