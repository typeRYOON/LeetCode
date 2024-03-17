/* medium :: prefix-sum */
/*
    Use a prefix-sum and hashmap. Treat 0s as
    -1s, and add each value to the sum.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    int findMaxLength(vector<int>& nums)
    {
        unordered_map<int, int> M;
        int ret = 0, sum = 0, n = nums.size();

        M[0] = -1;
        for (int i = 0; i < n; ++i)
        {
            sum += (nums[i]) ? 1 : -1;
            if   (M.contains(sum)) { ret = max(ret, i - M[sum]); }
            else { M[sum] = i; }
        }
        return ret;
    }
};