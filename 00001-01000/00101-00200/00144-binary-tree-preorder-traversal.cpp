/* easy :: tree */
/*
    Use an array and populate it during traversal.
    Add the val to your array,
    Delve left, then right.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> ret;
        preorder(root, ret);
        return ret;
    }


    void preorder(TreeNode* node, vector<int>& ret)
    {
        if (!node) { return; }
        ret.push_back(node->val);
        preorder(node->left, ret);
        preorder(node->right, ret);
    }
};