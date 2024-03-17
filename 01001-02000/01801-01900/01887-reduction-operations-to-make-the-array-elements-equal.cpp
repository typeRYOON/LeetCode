/* medium :: math */
/*
    Sort and carry the last largest number count.

    1, 2, 2, 4, 5, 6, 6 
    1, 2, 2, 4, 5, 5, 5 :: 2  +2
    1, 2, 2, 4, 4, 4, 4 :: 5  +3
    1, 2, 2, 2, 2, 2, 2 :: 9  +4
    1, 1, 1, 1, 1, 1, 1 :: 15 +6
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int reductionOperations(vector<int>& nums)
    {
        int ret = 0, n = nums.size() - 1;
        int carry = 0, r = nums[n];
        sort(nums.begin(), nums.end());

        for (int i = n; i >= 0; --i) {
            if (nums[i] != r) {
                ret += carry;
                r = nums[i];
            }
            carry += 1;
        }
        return ret;
    }
};