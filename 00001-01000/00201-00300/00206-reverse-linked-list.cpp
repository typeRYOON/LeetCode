/* easy :: linked-list */
/*
    Use previous/next pointers.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* next;

        while (head)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};