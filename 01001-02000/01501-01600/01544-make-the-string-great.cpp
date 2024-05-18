/* easy :: stack */
/*
    Use the return string like a stack.
    If the last char added is the same letter but
    different case, remove it. Everything else add
    to the stack. Everything leftover will be valid
    characters.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    string makeGood(string s)
    {
        string ret = "";
        for (const char& c : s)
        {
            if (!ret.empty() && abs(c - ret.back()) == 32) {
                ret.pop_back();
            }
            else { ret.push_back(c); }
        }
        return ret;
    }
};