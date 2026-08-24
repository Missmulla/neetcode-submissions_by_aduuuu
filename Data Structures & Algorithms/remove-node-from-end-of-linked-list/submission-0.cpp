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
        if(head == NULL) return nullptr;
        int count = 0;
        ListNode* curr = head;
        ListNode* last = NULL;

        while(curr != NULL){
            count++;
            if(curr->next == NULL){
                last = curr;
            }
            curr = curr->next;
        }

        int pos = count - n;
        if(pos == 0) return head->next;

        ListNode* tmp = head;

        for(int i = 1; i < pos; i++){
            tmp = tmp->next;
        }
        tmp->next = tmp->next->next;

        return head;   
    }
};
