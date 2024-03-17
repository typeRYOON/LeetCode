/* easy :: tree */
/*
    Using a greedy approach to get the
    max diameter size of each subtree.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root)
    {
        int ret = 0;
        DFS(root, ret);
        return ret;
    }

    int DFS(TreeNode* node, int& ret)
    {
        if (!node) { return 0; }
        const int l = DFS(node->left, ret), r = DFS(node->right, ret);
        ret = max(ret, l+r);
        return 1 + max(l, r);
    }
};