/* easy :: two-pointers */
/*
    Using two pointers, push the larger square
    to the back of the array.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int> ret(r + 1);
        int l = 0, r = nums.size() - 1;
        int i = r;

        while (i >= 0)
        {
            if (abs(nums[l]) > abs(nums[r])) {
                ret[i--] = nums[l] * nums[l++];
            } else {
                ret[i--] = nums[r] * nums[r--];
            }
        }
        return ret;
    }
};