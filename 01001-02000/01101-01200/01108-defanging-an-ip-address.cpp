/* easy :: string */
/*
    Do string replace operations.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    string defangIPaddr(string a)
    {
        size_t pos = 0;
        while ((pos = a.find('.', pos)) != string::npos)
        {
            a.replace(pos, 1, "[.]");
            pos += 3;
        }
        return a;
    }
};