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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<TreeNode*>v1;
        vector<TreeNode*>v2;
        queue<TreeNode*>q1,q2;
        q1.push(p);
        q2.push(q);
        while(!q1.empty()){
            TreeNode*temp=q1.front();
            q1.pop();
            v1.push_back(temp);
            if(temp!=nullptr){
                q1.push(temp->left);
                q1.push(temp->right);
            }
        }
          while(!q2.empty()){
            TreeNode*temp1=q2.front();
            q2.pop();
            v2.push_back(temp1);
            if(temp1!=nullptr){
                q2.push(temp1->left);
                q2.push(temp1->right);
            }
        }
        if(v1.size()!=v2.size()){
            return false;
        }
        else{
        for(int i=0;i<v1.size();i++){
            if(v1[i]==nullptr&&v2[i]==nullptr){
                continue;
            }
            else if(v1[i]==nullptr||v2[i]==nullptr){
                return false;
            }
            else if(v1[i]->val==v2[i]->val){
                continue;
            }
            else{
                return false;
            }
        }
    }
    return true;
    }
};