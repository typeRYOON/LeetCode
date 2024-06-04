/* easy :: array */
/*
    Do the calculation on each char and its
    forward adjacent.
    - -                 - -
    Time  :: O(n) ::    0ms
    Space :: O(1) :: 7.76MB
*/
class Solution {
public:
    int32_t scoreOfString(const string s)
    {
        int32_t ret = 0, i = 0, n = s.length() - 1;
        for (; i < n; ++i) {
            ret += abs(int16_t(s[i]) - int16_t(s[i + 1]));
        }
        return ret;
    }
};