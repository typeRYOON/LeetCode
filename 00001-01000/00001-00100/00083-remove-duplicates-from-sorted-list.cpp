/* easy :: linked-list */
/*
    Check the cur->next->val and traverse
    until there is a different number, the
    original node should now connect to
    this new node.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        if (!head) { return head; }
        ListNode* cur = head;
        ListNode* prev;

        while (cur)
        {
            prev = cur;
            while (cur && prev->val == cur->val) {
                cur = cur->next;
            }
            prev->next = cur;
        }
        prev->next = nullptr;
        return head;
    }
};
