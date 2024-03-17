/* medium :: array */
/*
    Modify the new interval by minimizing/maximizing 
    the new merged start and end respectively.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
    {
        vector<vector<int>> ret;
        int i = 0, n = intervals.size();

        // Add intervals before new start ::
        while (i < n && intervals[i][1] < newInterval[0]) {
            ret.push_back(intervals[i++]);
        }
        // Merge the intervals ::
        while (i < n && intervals[i][0] <= newInterval[1])
        {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        ret.push_back(newInterval);
        // Add intervals after new end ::
        while (i < n) {
            ret.push_back(intervals[i++]);
        }
        return ret;
    }
};