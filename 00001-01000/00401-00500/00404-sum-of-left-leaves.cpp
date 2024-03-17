/* easy :: tree */
/*
    Follow the conditions of the problem.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) { return helper(root, false); }
    int helper(TreeNode* node, bool isLeft) {
        if (!node)      { return 0; }
        if (!node->left && !node->right)
        {
            if (isLeft) { return node->val; }
            else        { return 0; }
        }
        return helper(node->left, true) + helper(node->right, false);
    }
};