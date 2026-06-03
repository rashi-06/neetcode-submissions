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
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode* curr = head;
        int currLen = 1;
        if(!head)return head;

        while(curr->next && currLen <k){
            curr = curr->next;
            currLen++;
        }
        if(currLen<k)return head;

        ListNode* temp = curr->next;
        curr->next = NULL;

        ListNode* tempList = reverseKGroup(temp, k);
        ListNode* newHead = reverse(head);
        head->next = tempList;
        return newHead;
        

    }

    ListNode* reverse(ListNode* head){
      ListNode* prev = NULL;
      ListNode* temp = NULL;
      ListNode* curr = head;

      while(curr){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
      }
      return prev;
    }
};