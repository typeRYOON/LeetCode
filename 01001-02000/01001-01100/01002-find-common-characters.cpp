/* easy :: hashmap */
/*
    Keep the count of the first string.
    Iterate over the remaining strings and
    filter the original map.
    - -           - -
    Time  :: O(n * m)
    Space :: O(m)
*/
class Solution {
public:
    vector<string> commonChars(vector<string>& n) {
        unordered_map<char, int> M, temp;
        for (const char& c : n[0]) { M[c]++; }
        for (int i = 1; i < n.size(); ++i)
        {
            temp.clear();
            for (const char& c : n[i]) { temp[c]++; }
            for (auto it = M.begin(); it != M.end();)
            {
                if (!temp.contains(it->first)) {
                    it = M.erase(it);
                }
                // Keep the lowest count, "aaaa" vs "aaa", 3 in common ::
                else { 
                    it->second = min(it->second, temp[it->first]);
                    ++it;
                }
            }
        }
        // Push back the count number of chars ::
        vector<string> ret;
        for (const auto& [chr, count] : M) {
            ret.insert(ret.end(), count, string(1, chr));
        }
        return ret;
    }
};