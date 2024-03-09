/* easy :: linked-list */
/*
    Recursively find the next node that is valid,
    there could be multiple invalid nodes in a
    row. Could be done iteratively.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode* cur = head;
        
        // Empty LL:
        if (!cur) { return nullptr; }
        
        // First node->val == val
        else if (cur->val == val) {
            cur = nextFind(cur, val);
            head = cur;
        }
        // Remove elements:
        while (cur)
        {
            cur->next = nextFind(cur, val);
            cur = cur->next;
        }
        return head;
    }


    // Recursively find next valid node:
    ListNode* nextFind(ListNode* node, const int& val)
    {
        if (!node->next || node->next->val != val) {
            return node->next;
        }
        return nextFind(node->next, val);
    }
};