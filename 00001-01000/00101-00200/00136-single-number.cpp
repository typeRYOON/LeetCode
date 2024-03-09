/* easy :: bit-hacks */
/*
    If you XOR a number with some k number twice,
    you will get the original number back.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int ret = 0;
        for (const int& num : nums) { ret ^= num; }
        return ret;
    }
};
