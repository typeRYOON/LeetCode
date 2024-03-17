/* easy :: tree */
/*
    Swap the left and right subtrees.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root)
    {
        if(!root) { return nullptr; }
        invertTree(root->left);
        invertTree(root->right);
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        return root;
    }
};