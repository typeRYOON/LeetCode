/* easy :: bit-hacks */
/*
    XOR the two numbers to keep only bits that
    are different, then get the hamming weight.
    - -       - -
    Time  :: O(1)
    Space :: O(1)
*/
class Solution {
public:
    int hammingDistance(int32_t x, int32_t y)
    {
        x ^= y;
        uint8_t ret = 0;

        while (x)
        {
            ret += x & 0x1;
            x >>= 1;
        }
        return ret;
    }
};