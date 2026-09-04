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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        int carry = 0;

        ListNode* res = NULL;
        ListNode* tail = NULL;


        while(curr1 != NULL || curr2 != NULL){

            int val1 = (curr1 != NULL) ? curr1->val : 0;
            int val2 = (curr2 != NULL) ? curr2->val : 0;

            int sum = val1 + val2 + carry;

            int digit = sum % 10;
            carry = sum / 10;
            
            ListNode* newNode = new ListNode(digit);

            if(res == NULL){
                res = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
            if(curr1 != NULL){
            curr1 = curr1->next;
            }
            if(curr2 != NULL){
            curr2 = curr2->next;
            }
        }
        if(carry != 0){
            ListNode* newCarry = new ListNode(carry);

            tail->next = newCarry;
            tail = newCarry;
        }
        return res;


    }
};
