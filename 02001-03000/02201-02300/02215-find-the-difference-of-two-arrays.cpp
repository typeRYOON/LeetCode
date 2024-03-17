/* easy :: hashmap */
/*
    Use a set to remove duplicates. Then check
    for the unique elements.
    - -           - -
    Time  :: O(n + m)
    Space :: O(n + m)
*/
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& n, vector<int>& m)
    {
        vector<vector<int>> ret(2);
        unordered_set<int> SN(n.begin(), n.end());
        unordered_set<int> SM(m.begin(), m.end());
        for (const int& num : SN)
        {
            if (!SM.contains(num)) {
                ret[0].push_back(num);
            }
        }
        for (const int& num : SM)
        {
            if (!SN.contains(num)) {
                ret[1].push_back(num);
            }
        }
        return ret;
    }
};