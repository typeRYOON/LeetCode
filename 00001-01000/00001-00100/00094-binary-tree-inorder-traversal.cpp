/* easy :: tree */
/*
    Use an array and populate it during traversal.
    delve to the deepest left subtree then add
    the val to your array, then delve right.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> ret;
        inorder(root, ret);
        return ret;
    }


    void inorder(TreeNode* node, vector<int>& ret)
    {
        if (!node) { return; }
        inorder(node->left, ret);
        ret.push_back(node->val);
        inorder(node->right, ret);
    }
};