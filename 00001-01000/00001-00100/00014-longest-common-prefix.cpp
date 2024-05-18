/* easy :: string */
/*
    Take the first string as the base comparison object.
    Check each string in n, loop through string until
    mismatch occurs, minimize where the prefix ends for
    all strings.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& n)
    {
        const string base = n[0];
        uint8_t pf = base.length();

        for (const string& s : n)
        {
            for (uint8_t i = 0; i < pf; ++i)
            {
                if (s[i] != base[i]) {
                    pf = min(pf, i);
                    break;
                }
            }
            if (pf == 0) { return ""; }
        }
        return base.substr(0, pf);
    }
};