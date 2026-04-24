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
    ListNode* modifiedList(vector<int>& v, ListNode* head) {
        unordered_set<int>s(v.begin(),v.end());
        if(head==NULL){
            return NULL;
        }
        ListNode*temp=head;
        while(s.count(temp->val)){
            temp=temp->next;
        }
        head=temp;
        if(temp==NULL){
            return NULL;
        }
        while(temp->next!=NULL){
            if(temp!=NULL&&s.count(temp->next->val)){
                temp->next=temp->next->next;
            }
            else{
            temp=temp->next;
            }
        }
        return head;
    }
};