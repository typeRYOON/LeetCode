/* easy :: string */
/*
    Use C++'s String::find.
    - -         - -
    Time  :: O(n*m)
    Space :: O(1)
*/
class Solution {
public:
    int strStr(string n, string m)
    {
        int i = (int)n.find(m);
        return i == string::npos ? -1 : i;
    }
};