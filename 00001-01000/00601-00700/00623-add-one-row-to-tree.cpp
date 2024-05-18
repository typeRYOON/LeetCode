/* easy :: tree */
/*
    Insert on new nodes on layer before desired depth.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    TreeNode* addOneRow(TreeNode* node, int val, int depth)
    {
        TreeNode* root = node, *t1, *t2;
        if (depth == 1) {
            root = new TreeNode(val, node, nullptr);
            return root;
        }
        if (depth == 2) {
            t1 = new TreeNode(val, root->left, nullptr);
            t2 = new TreeNode(val, nullptr, root->right);
            root->left = t1;
            root->right = t2;
        }
        recurse(root->left, val, depth-1, 2);
        recurse(root->right, val, depth-1, 2);
        return root;
    }

    void recurse(TreeNode* node, const int val, const int depth, int curD)
    {
        if (!node) { return; }
        if (curD == depth)
        {
            node->left  = new TreeNode(val, node->left, nullptr);
            node->right = new TreeNode(val, nullptr, node->right);
            return;
        }
        recurse(node->left,  val, depth, curD + 1);
        recurse(node->right, val, depth, curD + 1);
    }
};