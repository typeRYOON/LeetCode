/* medium :: linked-list */
/*
    Retrieve the nodes, add them to an array.
    Sort the nodes by their value, then reconstruct.
    - -             - -
    Time  :: O(nlog(n))
    Space :: O(n)
*/
class Solution {
public:
    static bool compareNodes(const ListNode* a, const ListNode* b)
    {
        return a->val < b->val;
    }


    ListNode* sortList(ListNode* head) {
        if (!head) { return head; }
        vector<ListNode*> nodeList;
        while (head)
        {
            nodeList.push_back(head);
            head = head->next;
        }
        int n = (int)nodeList.size();
        sort(nodeList.begin(), nodeList.end(), compareNodes);
        for (int i = 0; i < n - 1; ++i) {
            nodeList[i]->next = nodeList[i + 1];
        }
        nodeList[n - 1]->next = nullptr;
        return nodeList[0];
    }
};