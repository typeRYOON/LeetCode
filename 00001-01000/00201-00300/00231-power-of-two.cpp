/* easy :: bit-hacks */
/*
    A base 2 number and the number before it
    will have no bits in the same place.
    8 = 1000
    7 = 0111
    - -       - -
    Time  :: O(1)
    Space :: O(1)
*/
class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        return n > 0 ? !(n & (n - 1)) : false;
    }
};