/* medium :: math */
/*
    Get the number of digits, multiply
    the first digit by this count,
    decement that count until !x.
    Bad solution memory-wise.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int reverse(int x)
    {
        int8_t sign = 1;
        unsigned long ret = 0;
        if (x < 0) {
            if (x == INT_MIN) { return 0; }
            sign = -1; 
            x *= -1;
        }
        if (x == 0) { return 0; }
        int16_t d = (int16_t)log10((double) x) + 1;
        while (x)
        {
            ret += pow(10, d-1) * (x % 10);
            x /= 10;
            d--;
        }
        if (ret > INT_MAX) {
            return 0;
        }
        return ret * sign;
    }
};