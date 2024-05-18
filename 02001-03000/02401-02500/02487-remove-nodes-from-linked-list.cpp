/* medium :: linked-list */
/*
    Delve to the end of the list. Use the next node
    after the current one, remove the current node
    if it's less than the next node.
    - -                   - -
    Time  :: O(n) ::    251ms
    Space :: O(1) :: 164.42MB
*/
class Solution {
public:
    ListNode* removeNodes(ListNode* head)
    {   // Recursive base case ::
        if (!head) { return nullptr; }

        // Delve until end of list, on return assign next valid node ::
        head->next = removeNodes(head->next);

        // Remove current head if head->next val >= head val ::
        return (head->next && head->val < head->next->val) ? head->next : head;
    }
};