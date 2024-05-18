/* medium :: tree */
/*
    Keep track of the last node's value, make sure
    the next ones are within their BST limits.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
    bool valid(TreeNode* node, long long l, long long r)
    {
        if (!node) { return true; }
        if (node->val < r && node->val > l)
        {
            return valid(node->left, l, node->val) && 
                   valid(node->right, node->val, r);
        }
        return false;
    }

    public:
        bool isValidBST(TreeNode* root) {
            return valid(root, LLONG_MIN, LLONG_MAX);
        }
};