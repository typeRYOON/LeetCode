/* easy :: array */
/*
    Find the max element in c.
    For each element ret[i] = true if c[i] + e > max.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, uint8_t e)
    {
        uint8_t n = c.size(), cMax = 0;
        vector<bool> ret(n, false);
        for (const int& i : c) { if (i > cMax) { cMax = i; } }
        for (uint8_t i = 0; i < n; ++i)
        {
            if (c[i] + e >= cMax) { ret[i] = true; }
        }
        return ret;
    }
};