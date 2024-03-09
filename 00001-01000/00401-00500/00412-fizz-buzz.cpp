/* easy :: bit-hacks */
/*
    FizzBuzz's multiples cycle, store that
    pattern in a bitqueue and pop elements
    using bitwise operations.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<string> fizzBuzz(int n)
    {
        // bitQueue = 0b 0011 0000 0100 1001 0000 0110 0001 0000
        string o[4] = {"", "Fizz", "Buzz", "FizzBuzz"};
        int bitQueue = 0x30490610, i = 1, popped;
        vector<string> ret(n);

        for (; i <= n; ++i)
        {
            popped = bitQueue & 0x3;                  // Pop front element.
            bitQueue = bitQueue >> 2 | popped << 28;  // Send popped element to back.
            ret[i-1] = popped ? o[popped] : to_string(i);
        }
        return ret;
    }
};