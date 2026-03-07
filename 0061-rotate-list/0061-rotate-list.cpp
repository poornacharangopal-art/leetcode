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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int>v;
        ListNode*l1=head;
        while(l1!=NULL){
            v.push_back(l1->val);
            l1=l1->next;
        }
        if(v.size()==0){
            return NULL;
          }
          if(k>v.size()){
            k=k%v.size();
          }
        if(v.size()>=k){
            reverse(v.begin(),v.end());
            reverse(v.begin(),v.begin()+k);
            reverse(v.begin()+k,v.end());
        }
       
        ListNode*result=new ListNode(v[0]);
        ListNode*l2=result;
        for(int i=1;i<v.size();i++){
            l2->next=new ListNode(v[i]);
            l2=l2->next; 
        }
        return result;
    }
};