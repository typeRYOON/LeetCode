/* easy :: hashmap */
/*
    For each number in nums, substract it from target,
    this difference is the number we need for the current num.
    Use a hashmap to store where each number is.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> M;
        int n = (int)nums.size(), diff;
        for (int i = 0; i < n; ++i)
        {
            diff = target - nums[i];
            if (M.count(diff)) { return {i, M[diff]}; }
            else               { M[nums[i]] = i;      }
        }
        return {};
    }
};
