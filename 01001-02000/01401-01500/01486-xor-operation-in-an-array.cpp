/* easy :: bit-hacks */
/*
    Use a for loop to construct the number
    using the given equation nums[i] = start + 2 * i.
    - -                - -
    Time  :: O(n) ::   0ms
    Space :: O(1) :: 6.9MB
*/
class Solution {
public:
    int xorOperation(int n, int start)
    {
        int32_t ret = 0;
        for (int32_t i = 0; i < n; ++i)
        {
            ret ^= start + 2 * i;
        }
        return ret;
    }
};