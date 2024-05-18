/* medium :: tree */
/*
    DFS into tree, keep track of parent node.
    Move coins upwards before return on DFS.
    x<0 x move to gain, x>0 x moves to give.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    int16_t distributeCoins(TreeNode* root, TreeNode* prev = nullptr)
    {   // Recursive base case ::
        if (!root) { return 0; }

        // Get left and right subtree move count :: 
        int16_t moves = distributeCoins(root->left, root) + distributeCoins(root->right, root);
        
        // x<0 x move to gain, x>0 x moves to give ::
        int16_t x = root->val - 1;

        // If not root of tree, push coins upwards ::
        if (prev) { prev->val += x; }

        // Return the total moves upwards ::
        moves += abs(x);

        return moves;
    }
};