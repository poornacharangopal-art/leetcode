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
    ListNode* swapPairs(ListNode* head) {
        vector<int>v;
         ListNode*l=head;
        while(l!=NULL){
            v.push_back(l->val);
            l=l->next;
        }
        if(v.size()==0){
            return NULL;
        }
        if(v.size()==1){
            return head;
        }
        for(long long i=0;i<=v.size()-2;i+=2){
            if(i<v.size()-1){
            swap(v[i],v[i+1]);
            }
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