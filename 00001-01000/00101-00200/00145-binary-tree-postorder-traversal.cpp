/* easy :: tree */
/*
    Use an array and populate it during traversal.
    delve to the deepest left subtree then right.
    Add the val to your array.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int> ret;
        postorder(root, ret);
        return ret;
    }


    void postorder(TreeNode* node, vector<int>& ret)
    {
        if (!node) { return; }
        postorder(node->left, ret);
        postorder(node->right, ret);
        ret.push_back(node->val);
    }
};