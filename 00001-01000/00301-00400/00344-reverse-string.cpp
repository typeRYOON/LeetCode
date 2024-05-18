/* easy :: string */
/*
    Reverse the string using
    mirrored indices.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    void reverseString(vector<char>& s)
    {
        int n = s.size();
        for (int i = 0; i < n/2; ++i)
        {
            swap(s[i], s[n - i - 1]);
        }
    }
};