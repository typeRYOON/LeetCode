/* easy :: bit-hacks */
/*
    For each num i, get the hamming weight.
    and add to ret[i].
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    vector<int> countBits(int n)
    {
        n = n + 1;
        vector<int> ret(n);
        int copy;

        for (int i = 0; i < n; ++i)
        {
            copy = i;
            while (copy)
            {
                ret[i] += copy & 0x1;
                copy >>= 1;
            }
        }
        return ret;
    }
};