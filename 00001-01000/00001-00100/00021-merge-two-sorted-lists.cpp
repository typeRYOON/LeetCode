/* easy :: linked-list */
/*
    Use two pointers to traverse both lists
    until one list hits the end, append
    remaining nodes.
    - -           - -
    Time  :: O(n + m)
    Space :: O(1)
*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;

        // Merge both lists until one of them reaches the end ::
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val <= l2->val) {
                cur->next = l1;
                l1 = l1->next;
            }
            else {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        // Append the remaining nodes ::
        if (l1 != nullptr) { cur->next = l1; }
        else               { cur->next = l2; }
        return dummy->next;
    }
};