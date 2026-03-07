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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode*l1=head;
        while(l1!=NULL){
            v.push_back(l1->val);
            l1=l1->next;
        }
        if(v.size()==0){
            return NULL;
        }
        sort(v.begin(),v.end());
        ListNode*result=new ListNode(v[0]);
        ListNode*p=result;
        for(int i=1;i<v.size();i++){
            p->next=new ListNode(v[i]);
            p=p->next;
        }
        return result;
    }
};