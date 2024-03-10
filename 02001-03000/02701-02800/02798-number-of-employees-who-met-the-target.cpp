/* easy :: array */
/*
    Iterate and check each value.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target)
    {
        int n = (int)hours.size(), c = 0;
        for (int i = 0; i < n; ++i) {
            if (hours[i] >= target) { c++; }
        }
        return c;
    }
};