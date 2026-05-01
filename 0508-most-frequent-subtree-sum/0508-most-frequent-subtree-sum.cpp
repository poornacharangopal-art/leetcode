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
   int sums(TreeNode*root){
    queue<TreeNode*>q;
    q.push(root);
    int sum=0;
    while(!q.empty()){
        TreeNode*temp=q.front();
        q.pop();
        sum+=temp->val;
        if(temp->left){
            q.push(temp->left);
        }  
         if(temp->right){
            q.push(temp->right);
        }
    }
    return sum;
   }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int,int>mp;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*temp=q.front();
            q.pop();
            int sum=sums(temp);
            mp[sum]++;
              if(temp->left){
            q.push(temp->left);
        }  
         if(temp->right){
            q.push(temp->right);
        }
        }
        int max=0;
        for(auto&p:mp){
            if(p.second>max){
                max=p.second;
            }
        }
        vector<int>ans;
        for(auto&p:mp){
            if(p.second==max){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};