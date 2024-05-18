/* medium :: tree */
/*
    DFS into root, remove leaf nodes,
    if new leaf node with target value
    is created then perform the same
    operation on return of DFS.
    - -                  - -
    Time  :: O(n) ::     7ms
    Space :: O(1) :: 21.24MB
*/
class Solution {
public:
    int16_t target;
    TreeNode* removeLeafNodes(TreeNode* root, const int16_t target)
    {
        this->target = target;
        mendTree(root->left,  root, true) ;
        mendTree(root->right, root, false);

        // Base case - root is/becomes a leaf node ::
        if (root->left == root->right && root->val == target) { return nullptr; }
        return root;
    }

private:
    void mendTree(TreeNode* node, TreeNode* prev, const bool& left)
    {   // Recursive base case ::
        if (!node) { return; }

        // DFS left and right subtrees ::
        mendTree(node->left,  node, true) ;
        mendTree(node->right, node, false);

        // Leaf node case ::
        if (node->left == node->right && node->val == target)
        {
            if (left) { prev->left  = nullptr; }
            else      { prev->right = nullptr; }
        }
    }
};