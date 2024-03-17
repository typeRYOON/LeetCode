/* easy :: binary-search */
/*
    Use binary search to find the sqrt of x.
    - -            - -
    Time  :: O(log(n))
    Space :: O(1)
*/
class Solution {
public:
    int mySqrt(int x)
    {
        if (!x) { return 0; }
        int l = 1, r = x, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if      (mid == x / mid) { return mid ; }  // 4 == 16/4
            else if (mid > x / mid)  { r = mid - 1; }  // 5 >  16/4
            else                     { l = mid + 1; }  // 3 <  16/4
        }
        return r;
    }
};