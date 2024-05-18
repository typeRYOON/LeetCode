/* easy :: array */
/*
    Summation algorithm.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<int> runningSum(vector<int>& n)
    {
        for (uint16_t i = 1; i < n.size(); ++i) { n[i] += n[i - 1]; }
        return n;
    }
};