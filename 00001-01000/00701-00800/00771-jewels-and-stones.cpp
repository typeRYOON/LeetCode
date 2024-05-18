/* easy :: priority-queue */
/*
    Use a set to check each char in stones is
    contained within the language set.
    - -                 - -
    Time  :: O(n) ::    0ms
    Space :: O(m) :: 8.11MB
*/
class Solution {
public:
    int8_t numJewelsInStones(string jewels, string stones)
    {
        int8_t ret = 0;
        unordered_set<char> S;
        for (const char& c : jewels) { S.emplace(c); }
        for (const char& c : stones) {
            if (S.contains(c)) { ret++; }
        }
        return ret;
    }
};