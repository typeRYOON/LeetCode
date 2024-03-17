/* medium :: hashmap */
/*
    Use a hashmap to store cumulative sums along
    with their corresponding nodes as you traverse.
    Whenever a cumulative sum repeats, it indicates
    a sequence of nodes with a sum of 0, so remove
    the nodes between them.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head)
    {
        ListNode* dummy = new ListNode(0), *start;
        dummy->next = head;

        int sum = 0, tempSum;
        unordered_map<int, ListNode*> M;
        ListNode* cur = dummy;

        while (cur)
        {
            sum += cur->val;
            if (M.find(sum) != M.end())
            {
                // Remove nodes between M[sum] and cur ::
                start = M[sum]->next;
                tempSum = sum + start->val;
                while (start != cur)
                {
                    M.erase(tempSum);
                    start = start->next;
                    tempSum += start->val;
                }
                M[sum]->next = cur->next;
            } else { M[sum] = cur; }
            cur = cur->next;
        }
        return dummy->next;
    }
};