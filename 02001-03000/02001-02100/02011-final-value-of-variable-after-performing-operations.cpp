/* easy :: string */
/*
    Check if string has a '+' or '-'.
    Increment/Decrement as needed.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int8_t ret = 0;
        for (const string& op : operations)
        {
            if (op.find('+') != -1) { ret++; }
            else                    { ret--; }
        }
        return ret;
    }
};