/* medium :: linked-list */
/*
    Take the next value and shift it down.
    Skip the original.
    - -       - -
    Time  :: O(1)
    Space :: O(1)
*/
class Solution {
public:
    void deleteNode(ListNode* node)
    {
        node->val  = node->next->val;
        node->next = node->next->next;
    }
};