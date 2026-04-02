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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size()/2;
        if(n==0){
            return NULL;
        }
        v.erase(v.begin()+n);
        ListNode* root=new ListNode(v[0]);
        ListNode* temp1=root;
        for(int i=1;i<v.size();i++){
            temp1->next=new ListNode(v[i]);
            temp1=temp1->next;
        }
        return root;
    }
};