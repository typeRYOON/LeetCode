/* easy :: linked-list */
/*
    Use a fast and slow node traverser.
    fast traverses two nodes at a time
    while slow traverses one. The slow
    node will be in the middle at the
    end of the traversal.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    ListNode* middleNode(ListNode* fast)
    {
        ListNode* slow = fast;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};
