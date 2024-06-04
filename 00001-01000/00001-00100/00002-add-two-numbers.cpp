/* medium :: linked-list */
/*
    Add each digit together and move carry digit forward.
    Make sure to stop moving a list forward if it runs out
    of nodes, but keep iterating the other if it still has
    nodes in its list.
    - -                         - -
    Time  :: O(max(n, m)) ::   22ms
    Space :: O(1)         :: 75.9MB
*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int8_t carry = 0, val1, val2, sum;
        ListNode* head = new ListNode(0);
        ListNode* cur = head;

        while (l1 || l2 || carry)
        {   // Add together if they exist ::
            val1 = l1 ? l1->val : 0;
            val2 = l2 ? l2->val : 0;
            sum = val1 + val2 + carry;
            carry = sum / 10;
            
            // Append new digit and iterate ::
            cur->next = new ListNode(sum % 10);
            cur = cur->next;

            // Iterate until both reach their tails ::
            if (l1) { l1 = l1->next; }
            if (l2) { l2 = l2->next; }
        }
        return head->next;
    }
};