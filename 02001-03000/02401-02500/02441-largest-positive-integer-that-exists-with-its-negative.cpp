/* easy :: hashmap */
/*
    Use a set to keep track of the negated
    version of each number, if a number finds
    that its negation is in that set, update
    the max number.
    - -                 - -
    Time  :: O(n) ::   23ms
    Space :: O(n) :: 28.4MB
*/
class Solution {
public:
    static int16_t findMaxK(const vector<int16_t>& n)
    {
        unordered_set<int16_t> S;
        int16_t maxInt = -1, negated;

        for (const int16_t& num : n)
        {
            negated = -num;
            if (S.contains(negated)) {
                maxInt = max(maxInt, max(negated, num));
            }
            S.emplace(num);
        }
        return maxInt;    
    }
};