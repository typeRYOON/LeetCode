/* medium :: prefix-sum */
/*
    At every spot multiply the left values against
    the right values, achieve this using a prefix
    and postfix product.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int pr = 1, n = (int)nums.size();
        vector<int> ret(n);
        for (int i = 0; i < n; ++i) {
            ret[i] = pr;
            pr *= nums[i];
        }

        pr = 1;
        for (int i = n - 1; i >= 0; --i) {
            ret[i] *= pr;
            pr *= nums[i];
        }
        return ret;
    }
};