/* easy :: bit-hacks */
/*
    XOR the char integer representation, the remaining number
    will be the integer representation of the added character.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    char findTheDifference(string s, string t)
    {
        int8_t ret = 0;
        for (const char& c : s) { ret ^= static_cast<int8_t>(c); }
        for (const char& c : t) { ret ^= static_cast<int8_t>(c); }
        return static_cast<char>(ret);
    }
};