/* easy :: hashmap */
/*
    Use a set to keep track of the chars
    that have been seen, a palindrome must
    means that two of the same chars were
    found.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    int longestPalindrome(string s)
    {
        unordered_set<char> S;
        int ret = 0;

        for (const char& c : s)
        {
            if (S.contains(c)) { 
                S.erase(c);
                ret += 2;
            }
            else { S.emplace(c); }
        }
        return S.empty() ? ret : ret + 1;
    }
};