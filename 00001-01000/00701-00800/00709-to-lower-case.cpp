/* easy :: math */
/*
    Use a lowercase function lol.
    If you want you can solve it by checking
    if the ascii encoding is within the uppercase
    range. Then just shift it up 32.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    string toLowerCase(string s)
    {
        for (uint8_t i = 0; i < s.length(); ++i)
        {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};