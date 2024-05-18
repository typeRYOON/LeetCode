/* medium :: array */
/*
    Sort the input array by the end points.
    Set the first endpoint to the first one.
    Iterate through the balloons, if the
    ith start is past the cur end, ++.
    - -             - -
    Time  :: O(nlog(n))
    Space :: O(1)
*/
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& n)
    {   // Sort based on their end points ::
        sort(n.begin(), n.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int arrows = 1, end = n[0][1];
        for (int i = 1; i < n.size(); ++i)
        {   // If ith start > cur end ::
            if (n[i][0] > end) {
                end = n[i][1];
                arrows++;
            }
        }
        return arrows;
    }
};