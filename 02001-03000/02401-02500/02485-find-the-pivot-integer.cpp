/* easy :: math */
/*
    Use the sum of an arithmetic sequence up to n.
     >> x(x+1) / 2 = (n+x+1)(n-x) / 2
     >> x^2 + x  = n(n+1) - 2x(n+1) + x^2
     >> 2nx + 2x = n(n+1)
     >> 2x(n+1)  = n(n+1)
     >> x = (n(n+1)) / (2(n+1))
     >> x = n / 2.
    n/2 is the pivot integer iff n is even, else
    return -1 due to decimal values. Taking the
    sqrt of the arithmetic sum allows us to find
    the value of n/2, which is x.
    - -       - -
    Time  :: O(1)
    Space :: O(1)
*/
#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int pivotInteger(int n)
    {
        const double x = sqrt(n * (n + 1) >> 1);
        return x == static_cast<int>(x) ? x : -1;
    }
};