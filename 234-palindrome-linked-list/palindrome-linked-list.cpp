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
    bool isPalindrome(ListNode* head) {
        ListNode* curr=head;
        vector<int> arr;
        while(curr!=nullptr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int n=arr.size();
        int l=0;
        int r=n-1;
        while(r>l){
            if(arr[l]!=arr[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};