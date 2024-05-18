/* easy :: array */
/*
    Traverse in a 3x3 grid for each value within
    the center of grid, that is 2 <= m <= n - 2,
    in both axis. The returned matrix should be
    of size n - 2 x n - 2, so 0 <= m <= n - 2.
    - -                 - -
    Time  :: O(n^2) ::    7ms
    Space :: O(1)   :: 7.42MB
*/
class Solution {
public:
    vector<vector<int32_t>> largestLocal(vector<vector<int32_t>>& grid)
    {
        int8_t n = grid.size(), i, j, a = 0, b = 0;
        int8_t N = n - 2;
        int32_t m;
        vector<vector<int32_t>> ret(n - 2, vector<int32_t>(n - 2));

        while (a < N && b < N)
        {   // Reset local max m, traverse next 3x3 grid ::
            m = 0;  
            for (i = 0; i < 3; ++i)
            {
                for (j = 0; j < 3; ++j)
                {
                    m = max(m, grid[i+a][j+b]);
                }
            }
            ret[a++][b] = m;
            if (a == N)
            {   // Column increment ::
                a = 0;
                b++;
            }
        }
        return ret;
    }
};