/* easy :: hashmap */
/*
    Use a hashmap, keep char counts on
    one pass. Then find the first char
    that has a count of 1.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int firstUniqChar(string n)
    {
        vector<int> V(26, 0);
        for (const char& c : n) { V[c - 'a']++; }
        for (int i = 0; i < n.length(); ++i)
        {
            if (V[n[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};