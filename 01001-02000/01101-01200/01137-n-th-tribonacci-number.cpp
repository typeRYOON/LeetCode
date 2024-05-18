/* easy :: memoization */
/*
    Use a array map to keep track of past
    tribonacci i-th values.
    - -                 - -
    Time  :: O(n) ::    0ms
    Space :: O(1) :: 7.22MB
*/
class Solution {
public:
    uint32_t tribonacci(const int32_t& n)
    {
        uint32_t M[39];
        M[0] = 0, M[1] = 1, M[2] = 1;
        for (uint8_t i = 0; i <= n-2; ++i) {
            M[i+3] = M[i] + M[i+1] + M[i+2];
        }
        return M[n];
    }
};