/* easy :: hashmap */
/*
    Using a hashmap, count the occurrences of
    each character in both strings.
    Check that each character's count matches.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length()) { return false; }
        unordered_map<char, int> M1, M2;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            M1[s[i]] += 1;
            M2[t[i]] += 1;
        }
        for (const auto& [k, v] : M1) {
            if (M2[k] != v) {
                return false;
            }
        }
        return true;
    }
};