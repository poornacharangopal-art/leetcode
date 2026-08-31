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
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
        ListNode*prev=NULL;
        int count=0;
        while(temp!=NULL){
            if(prev&&temp->next){
                if(prev->val>temp->val&&temp->val<temp->next->val){
                   ans.push_back(count); 
                }
                else if(prev->val<temp->val&&temp->val>temp->next->val){
                        ans.push_back(count); 
                }
            }
            prev=temp;
            temp=temp->next;
            count++;
          }
          if(ans.size()==0||ans.size()==1){
            return {-1,-1};
          }
          int maxi=ans[ans.size()-1]-ans[0];
          int mini=INT_MAX;
          for(int i=0;i<ans.size()-1;i++){
            mini=min(mini,ans[i+1]-ans[i]);
          }
          return {mini,maxi};
    }
};