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
    ListNode* removeElements(ListNode* head, int val) {
        /*ListNode*l=head;
        while(l!=NULL){
            if(l->next->val==val){
                l->next=l->next->next;
            }
            l=l->next;
        }
        return head;*/
         vector<int>v;
         ListNode*l=head;
        while(l!=NULL){
            v.push_back(l->val);
            l=l->next;
        }
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==val){
                v.erase(v.begin()+i);
            }
        }
          if(v.size()==0){
            return NULL;
        }
           ListNode*result=new ListNode(v[0]);
        ListNode*p=result;
        for(int i=1;i<v.size();i++){
            p->next=new ListNode(v[i]);
            p=p->next;
        }
        return result;
    }
};