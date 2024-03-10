/* easy :: math */
/*
    Always decrease x and increase num,
    results in an increase of 2*t.
    - -       - -
    Time  :: O(1)
    Space :: O(1)
*/
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2*t;
    }
};