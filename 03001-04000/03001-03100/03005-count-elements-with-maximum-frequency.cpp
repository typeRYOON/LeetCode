/* easy :: hashmap */
/*
    Store counts in a hashmap.
    Return total max frequency.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums)
    {
        uint8_t maxFreq = 0, ret = 0;
        unordered_map<uint8_t, uint8_t> M;

        for (const int & num : nums) { M[num] += 1; }
        for (const auto& [k, v] : M) {
            if (v > maxFreq) {
                maxFreq = v;
                ret = v;
            }
            else if (v == maxFreq) {
                ret += v;
            }
        }
        return ret;
    }
};