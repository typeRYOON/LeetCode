/* easy :: array */
/*
    Swap the values into their index value pos.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int n = nums.size(), i = 0, good;
        vector<int> ret;
        // Swap values into correct index ::
        while (i < n)
        {
            good = nums[i] - 1;
            if (nums[i] != nums[good]) {
                swap(nums[i], nums[good]);
            }
            else { i++; }
        }
        // Check for mismatches ::
        for (i = 0; i < n; ++i)
        {
            if (i + 1 != nums[i]) {
                ret.push_back(i + 1);
            }
        }
        return ret;
    }
};