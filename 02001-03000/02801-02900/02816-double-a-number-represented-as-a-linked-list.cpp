/* medium :: linked-list */
/*
    Use a returned carry digit after
    doubling the digits from right
    to left.
    - -                   - -
    Time  :: O(n) ::    175ms
    Space :: O(1) :: 120.94MB
*/
class Solution {
public:
    ListNode* doubleIt(ListNode* head)
    {   // Case - carry of 1 returned ::
        if (doubleNode(head) == 1) {
            return new ListNode(1, head);
        }
        return head;
    }

private:
    int8_t doubleNode(ListNode* node)
    {   // Recursive base case ::
        if (!node) { return 0; }

        // Use returned value, add cur node val * 2 to it ::
        int8_t val = doubleNode(node->next) + node->val * 2;

        // Need a single digit ::
        node->val = val % 10;

        // Return carry digit ::
        return val > 9 ? 1 : 0;
    }
};