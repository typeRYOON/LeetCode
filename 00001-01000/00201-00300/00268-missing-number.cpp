/* easy :: bit-hacks */
/*
    Perform an xor-sum, the xor sum should
    cancel out the i index with the ith num.
    The missing number will be left, more
    specifically, the index.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int ret = 0, n = nums.size();
        for (int i = 0; i < n; ++i) { ret ^= i^nums[i]; }
        return ret^n;
    }
};

// Init ::
auto init = []()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    return 'c';
}();