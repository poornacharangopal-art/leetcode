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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>v1,v2;
        ListNode*p=list1;
        while(p!=NULL){
            v1.push_back(p->val);
            p=p->next;
        }
        ListNode*p1=list2;
        while(p1!=NULL){
            v2.push_back(p1->val);
            p1=p1->next;
        }
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        if(v1.size()==0){
            return NULL;
        }
        sort(v1.begin(),v1.end());
        ListNode*result=new ListNode(v1[0]);
        ListNode*p2=result;
        for(int i=1;i<v1.size();i++){
            p2->next=new ListNode(v1[i]);
            p2=p2->next;
        }
        return result;
    }
};