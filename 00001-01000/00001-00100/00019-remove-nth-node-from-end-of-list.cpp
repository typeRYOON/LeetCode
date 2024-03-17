/* medium :: linked-list */
/*
    Move a fast pointer up n nodes, then
    move a slow pointer along with the
    fast pointer, then remove nth node.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* dummy = new ListNode(0);
        dummy->next     = head ;
        ListNode* slow  = dummy;
        ListNode* fast  = dummy;

        n++;
        while (n--) { fast = fast->next; }
        while (fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
    }
};