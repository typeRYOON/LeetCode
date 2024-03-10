/* easy :: hashmap */
/*
    Use a hashmap to check a num exists in
    both vectors.
    - -               - -
    Time  :: O(max(n, m))
    Space :: O(n)
*/
class Solution {
public:
    vector<int> intersection(vector<int>& n, vector<int>& m)
    {
        unordered_set<int> s(n.begin(), n.end());
        vector<int> ret;
        for (const auto& num : m) {
            if (s.contains(num)) {
                ret.push_back(num);
                s.erase(num);
            }
        }
        return ret;
    }
};