/* easy :: binary-search */
/*
    Use a slightly modified binary search.
    - -            - -
    Time  :: O(log(n))
    Space :: O(1)
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        ios::sync_with_stdio(0);
        int l = 0, r = nums.size(), mid;

        // Past last element ::
        if (target > nums[r-1])      { return r   ; }

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (nums[mid] == target) { return mid ; }
            if (target < nums[mid])  { r = mid - 1; }
            else                     { l = mid + 1; }
        }
        // Supposed insert position ::
        return l;
    }
};