/* easy :: math */
/*
    Take the front digit using modulus, and
    do the needed calculations.
    - -       - -
    Time  :: O(1)
    Space :: O(1)
*/
class Solution {
public:
    int32_t subtractProductAndSum(int32_t n)
    {
        int32_t prod = 1, sum = 0;
        int8_t front;
        while (n)
        {
            front = n % 10;
            prod *= front;
            sum  += front;
            n    /= 10;
        }
        return prod - sum;
    }
};