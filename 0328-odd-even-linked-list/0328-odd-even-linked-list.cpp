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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>v;
        ListNode*l=head;
        while(l!=NULL){
            v.push_back(l->val);
            l=l->next;
        }
        if(v.size()==0){
            return NULL;
        }
        vector<int>o,e;
        for(int i=0;i<v.size();i++){
            if((i+1)%2==0){
                e.push_back(v[i]);
            }
            else{
                o.push_back(v[i]);
            }
        }
        for(int i=0;i<e.size();i++){
            o.push_back(e[i]);
        }
        ListNode*result=new ListNode(o[0]);
        ListNode*p=result;
        for(int i=1;i<o.size();i++){
            p->next=new ListNode(o[i]);
            p=p->next;
        }
        return result;
    }
};