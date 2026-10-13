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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        vector<int> ans;
        
        while(curr!=nullptr){
            ans.push_back(curr->val);
            curr=curr->next;
        }
        int a=ans.size();
        ans.erase(ans.begin()+a-n);
        ListNode* res= new ListNode(0);
        ListNode* tmp= res;
        for(int i=0;i<a-1;i++){
            tmp->next = new ListNode(ans[i]);
            tmp=tmp->next;
        }
       return res->next;
    }
};