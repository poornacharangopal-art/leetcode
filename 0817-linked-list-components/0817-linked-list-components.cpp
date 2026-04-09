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
    int numComponents(ListNode* head, vector<int>& nums) {
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int i=0,count=0;
        while(i<v.size()){
            if(find(nums.begin(),nums.end(),v[i])==nums.end()){
                i++;
                continue;
            }
            while(i<v.size()&&find(nums.begin(),nums.end(),v[i])!=nums.end()){
                i++;
            }
            count++;
            i++;
        }
        return count;
    }
};