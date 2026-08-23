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
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* second_half;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        second_half = slow->next;
        slow->next = NULL;

        ListNode* curr = second_half;
        ListNode* prev = NULL;

        while(curr != NULL){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        second_half = prev;

        while(second_half != NULL){
        ListNode* first_next = head->next;
        ListNode* second_next = second_half->next;

        head->next = second_half;
        second_half->next = first_next;

        head = first_next;
        second_half = second_next;
        }
    }
};
