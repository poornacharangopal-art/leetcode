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
    ListNode* doubleIt(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>v2(v.size(),0);
        for(int i=v2.size()-1;i>=0;i--){
            v2[i]+=v[i]*2;
            if(i!=0&&v2[i]>=10){
                v2[i]=v2[i]-10;
                v2[i-1]+=1;
            }
            if(i==0&&v2[i]>=10){
                v2[i]=v2[i]-10;
                v2.insert(v2.begin(),1);
            }
        }
        ListNode* root=new ListNode(v2[0]);
        temp=root;
        for(int i=1;i<v2.size();i++){
            temp->next=new ListNode(v2[i]);
            temp=temp->next;
        }
        return root;
    }
};