/* easy :: hashmap */
/*
    Use a hashmap to keep count of the m
    string char counts. Make sure all
    values in m can be used in string n.
    - -           - -
    Time  :: O(n + m)
    Space :: O(m)
*/
class Solution {
public:
    bool canConstruct(string n, string m)
    {
        unordered_map<char, int> M;
        for (const char& c : m) { M[c]++; }
        for (const char& c : n)
        {
            if (!M.contains(c)) { return false; }
            if (--M[c] <= 0)    { M.erase(c)  ; }
        }
        return true;
    }
};