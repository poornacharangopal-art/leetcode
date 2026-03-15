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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        while(i+k<=v.size()){
            reverse(v.begin()+i,v.begin()+i+k);
            i=i+k;
        }
        ListNode* head2=new ListNode(v[0]);
        ListNode*temp2=head2;
        for(int i=1;i<v.size();i++){
            temp2->next=new ListNode(v[i]);
            temp2=temp2->next;
        }
        return head2;
    }
};