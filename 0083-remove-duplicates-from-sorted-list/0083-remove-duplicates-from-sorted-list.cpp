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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int>v1;
        ListNode*l1=head;
        while(l1!=NULL){
            v1.push_back(l1->val);
            l1=l1->next;
        }
        if(v1.size()==0){
            return NULL;
        }
        int i=0;
        vector<int>v;
        while(i<v1.size())
        {
            v.push_back(v1[i]);
            while(i!=v1.size()-1&&v1[i]==v1[i+1]){
                i++;
            }
            i++;
        }
        sort(v.begin(),v.end());
        ListNode*result=new ListNode(v[0]);
        ListNode*p=result;
        for(int j=1;j<v.size();j++){
            p->next=new ListNode(v[j]);
            p=p->next;
        }
        return result;
    }
};