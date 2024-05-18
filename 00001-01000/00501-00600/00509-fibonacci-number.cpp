/* easy :: math */
/*
    Fibonacci Algorithm.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int fib(int8_t n)
    {
        int32_t one = 1, two = 0, fib;

        if (n == 0) { return 0; }
        if (n == 1) { return 1; }

        for (int8_t i = 1; i < n; ++i)
        {
            fib = one + two;
            two = one;
            one = fib;
        }
        return fib;
    }
};