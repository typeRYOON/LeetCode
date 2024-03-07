/* easy :: hashmap */
/*
    Use a set to store the nodes, if found,
    then there is a cycle.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
    - -       - -
    There is a O(n) time, constant space solution
    where you have one fast and slow traversing node, you
    would check if they are equal ever (cycle occured).
*/
class Solution {
public:
    bool hasCycle(ListNode* head) 
    {
        unordered_set<ListNode*> s;
        while (head) {
            if (s.count(head)) {
                return true;
            }
            s.emplace(head);
            head = head->next;
        }
        return false;
    }
};