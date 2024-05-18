/* easy :: bit-hacks */
/*
    Check if base 2, if not return false.
    Return true of flipped bit is in a
    odd bit position.
    - -       - -
    Time  :: O(1)
    Space :: O(1)
*/

class Solution {
public:
    bool isPowerOfFour(int64_t n)
    {
        if (n & (n - 1)) { return false; }
        bool on = true;

        while (n)
        {
            if (n & 0x1) { return on; }
            n >>= 1;
            on = !on;
        }
        return false;
    }
};