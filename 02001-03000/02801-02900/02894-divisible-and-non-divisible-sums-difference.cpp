/* easy :: math */
/*
    https://en.wikipedia.org/wiki/Arithmetic_progression
    - -                - -
    Time  :: O(1) ::   0ms
    Space :: O(1) :: 7.5MB
*/
class Solution {
public:
    int differenceOfSums(int n, int m) {
        return n * (n + 1) / 2 - n / m * ( n / m + 1) * m;
    }
};