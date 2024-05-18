/* medium :: tree */
/*
    Use a parameter to push the node values forward,
    use DFS to construct number one at a time.
    - -                  - -
    Time  :: O(n) ::     0ms
    Space :: O(1) :: 10.85MB
*/
class Solution {
public:
    static int32_t sumNumbers(TreeNode* root)
    {   // Root base case ::
        if (!root->left && !root->right) { return root->val; }

        int32_t sum = 0;
        recurse(root->left, sum, root->val); recurse(root->right, sum, root->val);
        return sum;
    }

    static void recurse(TreeNode* node, int32_t& sum, const int32_t push)
    {   // Return base case ::
        if (!node) { return; }

        // Leaf node case ::
        if (node->left == node->right)
        {   // Push path's number representation from 'push' ::
            sum += push * 10 + node->val;
            return;
        }
        // Propagation ::
        recurse(node->left,  sum, push * 10 + node->val);
        recurse(node->right, sum, push * 10 + node->val);
    }
};  