/* medium :: hashmap */
/*
    Create hashmap of order chars, then
    add frequency of them from s to M.
    Append order strings at end.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    string customSortString(string order, string s)
    {
        unordered_map<char, int> M;
        string ret = "";
        for (const char& c : order) {
            M[c] = 0;
        }

        for (const char& c : s) {
            if (M.contains(c)) {
                M[c] += 1;
            } else {
                ret += c;
            }
        }

        for (const char& c : order) {
            if (M.contains(c)) {
                ret.append(M[c], c);
            }
        }
        return ret;
    }
};