/* easy :: binary-search */
/*
    Binary search.
    - -            - -
    Time  :: O(log(n))
    Space :: O(1)
*/
class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int l = 0, r = nums.size() - 1, mid;

        while (l <= r) {
            mid = (l + r) / 2;
            if (nums[mid] < target) {
                l = mid + 1;
            }
            else if (nums[mid] > target) {
                r = mid - 1;
            }
            else {
                return mid;
            }
        }
        return -1;
    }
};