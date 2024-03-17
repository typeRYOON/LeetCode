/* easy :: hashmap */
/*
    Use a hashmap to keep the count of one
    array. Iterate the other and decrement
    counts.
    Time  :: O(n + m)
    Space :: O(n)
*/
class Solution {
public:
    vector<int> intersect(vector<int>& n, vector<int>& m)
    {
        vector<int> ret;
        unordered_map<int, int> M;

        for (const int& num : n) { M[num]++; }
        for (const int& num : m)
        {
            if (M.contains(num)) {
                ret.push_back(num);
                if (--M[num] == 0) { M.erase(num); }
            }
        }
        return ret;
    }
};