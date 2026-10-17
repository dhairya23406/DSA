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
        ListNode* l1=list1;
        ListNode* l2=list2;
        ListNode dummy(0);
        ListNode* ans=&dummy;
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val>l2->val){ 
            ans->next=l2;
            l2=l2->next;
            }
            else{ 
            ans->next=l1;
                l1=l1->next;
            }
            ans=ans->next;
            
        }
        if(l1!=nullptr){
            ans->next=l1;
        } else{
            ans->next=l2;
        }
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         if (lists.empty()) {
            return nullptr;
        }

        while (lists.size() > 1) {
            vector<ListNode*> mergedLists;

            for (int i = 0; i < lists.size(); i += 2) {
                ListNode* l1 = lists[i];
                ListNode* l2 = (i + 1 < lists.size())
                                   ? lists[i + 1]
                                   : nullptr;

                mergedLists.push_back(mergeTwoLists(l1, l2));
            }

            lists = mergedLists;
        }

        return lists[0];
    }
};