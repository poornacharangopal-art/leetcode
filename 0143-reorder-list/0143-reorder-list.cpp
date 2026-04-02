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
    void reorderList(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>v1;
        int i=0,j=v.size()-1;
        while(i<=j){
            if(i==j){
                v1.push_back(v[i]);
            }
            else{
                v1.push_back(v[i]);
                v1.push_back(v[j]);
            }
            i++;
            j--;
        }
        temp=head;
        int k=0;
        while(temp!=NULL){
            temp->val=v1[k++];
            temp=temp->next;
        }
    }
};