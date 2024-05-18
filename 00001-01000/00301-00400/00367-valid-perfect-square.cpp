/* easy :: binary-search */
/*
    Use binary search to find the
    integer that squares to x.
    - -            - -
    Time  :: O(log(n))
    Space :: O(1)
*/
class Solution {
public:
    bool isPerfectSquare(int x)
    {
        int l = 1, r = x;
        long long mid;
        while (l <= r)
        {
            mid = l + ((r - l) >> 1);
            if (x == mid*mid)     { return true; }
            else if (mid*mid > x) { r = mid - 1; }
            else                  { l = mid + 1; }
        }
        return false;
    }
};