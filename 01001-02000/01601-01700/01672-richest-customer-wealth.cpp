/* easy :: matrix */
/*
    Sum each ith array and return max sum.
    - -         - -
    Time  :: O(n*m)
    Space :: O(1)
*/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int maxW = 0;
        for (const auto& i : accounts) {
            maxW = max(maxW, accumulate(i.begin(), i.end(), 0));
        }
        return maxW;
    }
};