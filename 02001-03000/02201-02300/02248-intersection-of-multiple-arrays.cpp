/* easy :: hashmap */
/*
    Use an ordered map, if the count of
    each char doesn't equal the number
    of strings in nums, it's invalid,
    else it's valid. 
    - -           - -
    Time  :: O(n * m)
    Space :: O(n * m)
*/
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& N)
    {
        int n = N.size();
        map<int, int> M;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < N[i].size(); j++)
            {
                M[N[i][j]]++;
            }
        }
        vector<int> ret;
        for (const auto& [num, count] : M) {
            if (count == n) {
                ret.push_back(num);
            }
        }
        return ret;
    }
};