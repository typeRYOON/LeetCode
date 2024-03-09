/* easy :: number-theory */
/*
    If the first bit is flipped, it's odd, 
    else it's even. The smallest multiple
    of both is n*2 if odd and n if even.
    - -
    Time  :: O(1)
    Space :: O(1)
*/
class Solution {
public:
    int smallestEvenMultiple(int n) { return n & 0x1 ? n * 2 : n; }
};