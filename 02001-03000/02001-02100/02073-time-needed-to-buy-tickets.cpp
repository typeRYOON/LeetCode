/* easy :: array */
/*
    Get the summation before and after using
    min function.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, uint8_t k)
    {
        int16_t s = 0;
        uint8_t i = 0;
        bool before = true;

        for (const int& t : tickets)
        {
            if (i++ == k+1) { before = false; }
            s += before ? min(t, tickets[k]) : min(t, tickets[k] - 1);
        }
        return s;
    }
};