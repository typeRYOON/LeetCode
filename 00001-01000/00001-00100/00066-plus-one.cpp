/* easy :: math */
/*
    Use carrys front the back and add
    as needed.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        bool carry = 0;
        digits[digits.size() - 1]++;
        for (int i = digits.size() - 1; i > 0; --i)
        {
            if (carry + digits[i] > 9) {
                digits[i] = digits[i] + carry - 10;
                carry = 1;
            }
            else {
                digits[i] = digits[i] + carry;
                return digits;
            }
        }
        // Check front element ::
        if (digits[0] + carry > 9) {
            digits[0] = digits[0] + carry - 10;
            digits.insert(digits.begin(), 1);
        } 
        else { digits[0] += carry; }
        return digits;
    }
};