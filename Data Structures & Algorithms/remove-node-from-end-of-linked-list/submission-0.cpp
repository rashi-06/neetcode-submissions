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
      ListNode* dummy = new ListNode(-1);
        dummy->next = reverse(head);
        head = dummy;
        
        ListNode* prev= NULL, *curr= head;
        
        int i = 0;
        while(i<n){
            prev= curr;
            curr = curr->next;
            i++;
        }
        prev->next = curr->next;
        return reverse(head->next);
    }

    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL , *curr = head, *temp = NULL;

        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
