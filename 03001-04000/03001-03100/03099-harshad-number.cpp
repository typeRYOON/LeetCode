/* easy :: math */
/*
    Retrieve the first digit via modulus.
    - -       - -
    Time  :: O(1)
    Space :: O(1)
*/
class Solution {
public:
    int8_t sumOfTheDigitsOfHarshadNumber(uint8_t x)
    {
        uint8_t sum = 0, temp = x;
        while (temp)
        {
            sum += temp % 10;
            temp /= 10;
        }
        return x % sum == 0 ? sum : -1;
    }
};