/* medium :: two-pointers */
/*
    Use two pointers. If the sum is greater than
    target, decrement right pointer, else increment
    the left pointer.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target)
    {
        int l = 0, r = n.size() - 1, sum;

        while (l < r)
        {
            sum = n[l] + n[r];
            if (sum == target) {
                return {l+1, r+1};
            }
            if (sum > target) { r--; }
            else              { l++; }
        }
        return {-1, -1};
    }
};