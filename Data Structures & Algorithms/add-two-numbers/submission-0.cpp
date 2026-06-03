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
        if(!l1)return l2;
        if(!l2)return l1;

        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;

        int carry = 0;

        while(l1 || l2){
            int firstVal = l1 ? l1->val : 0;
            int secondVal = l2 ? l2->val : 0;

            int total = firstVal + secondVal + carry;

            carry = total/10;
            total = total%10;

            ListNode* newNode = new ListNode(total);
            dummy->next = newNode;
            dummy = dummy->next;

            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        if(carry)dummy->next = new ListNode(carry);
        return head->next;

    }
};
