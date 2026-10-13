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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Step 1: Reverse the list
        head = reverseList(head);

        // Step 2: Remove the nth node
        if (n == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        } else {
            ListNode* curr = head;

            for (int i = 1; i < n - 1; i++) {
                curr = curr->next;
            }

            ListNode* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }

        // Step 3: Reverse again
        head = reverseList(head);

        return head;
    }
};
