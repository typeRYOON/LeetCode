/* easy :: array */
/*
    Iterate and use C++'s string::find.
    - -         - -
    Time  :: O(n*m)
    Space :: O(n)
*/
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x)
    {
        vector<int> ret;
        const uint8_t n = words.size();
        for (uint8_t i = 0; i < n; ++i)
        {
            if (words[i].find(x) != string::npos) {
                ret.push_back(i);
            }
        }
        return ret;
    }
};