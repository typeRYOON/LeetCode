/* easy :: tree */
/*
    Use recursion, base case is that both nodes are nullptr.
    Check if one of them is a nullptr.
    Check if the value is different.
    Delve deeper.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        // Base case: null nodes ::
        if (p == q) {
            return true;
        }
        // One of them is a null node ::
        if (p == nullptr || q == nullptr) {
            return false;
        }
        // Value mismatch ::
        if (p->val != q->val) {
            return false;
        }
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};