/* easy :: hashmap */
/*
    Half the array must be some number.
    Use a hashmap to keep count.
    - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    int repeatedNTimes(vector<int>& nums)
    {
        unordered_map<int, int> M;
        for (const int& num : nums) {
            M[num] += 1;
        }
        int n = (signed)nums.size() >> 1;
        for (const auto& [k, v] : M) {
            if (v == n) {
                return k;
            }
        }
        return -1;
    }
};