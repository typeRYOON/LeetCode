/* easy :: bit-hacks */
/*
    AND the first bit and SHIFT n right 1.
    - -
    Time  :: O(1) (always a uint32_t)
    Space :: O(1)
*/
class Solution {
public:
    int hammingWeight(uint32_t n)
    {
        uint8_t c = 0;
        while (n)
        {
            if (n & 0x1) { c++; }
            n >>= 1;
        }
        return c;
    }
};
