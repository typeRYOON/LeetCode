/* easy :: string */
/*
    Use an integer as a stack.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int maxDepth(string s)
    {
        uint8_t maxDepth = 0, S = 0;
        for (const char& chr : s)
        {
            if (chr == '(') {
                maxDepth = max(maxDepth, ++S);
            }
            else if (chr == ')') { S--; }
        }
        return maxDepth;
    }
};