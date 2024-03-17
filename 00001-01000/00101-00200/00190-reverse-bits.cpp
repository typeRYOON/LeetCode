/* easy :: bit-hacks */
/*
    Use bit masking to get each bit's
    value and shift it to the reverse
    position.
    - -       - -
    Time  :: O(1)
    Space :: O(1)
*/
class Solution {
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t ret = 0, j = 31;
        uint64_t i = 0x80000000;
        for (; i != 0; i >>= 1, j--)
        {   
            ret += ((i & n) ? 0x80000000 >> j : 0);
        }
        return ret;
    }
}; 