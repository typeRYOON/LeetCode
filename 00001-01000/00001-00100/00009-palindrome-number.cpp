/* easy :: string */
/*
    I converted the integer into a string.
    LGTM.
    - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        int n = s.length();
        for (int i = 0, r = n - 1; i < n;)
        {
            if (s[i++] != s[r--]) { return false; }
        }
        return true;
    }
};