/* easy :: string */
/*
    Reverse up to the current 'i' char, continue
    onwards. Erase 'i' characters afterwards.
    - -                - -
    Time  :: O(n) ::   0ms
    Space :: O(1) :: 9.5MB
*/
class Solution {
public:
    string finalString(string s)
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] == 'i')
            {
                std::reverse(s.begin(), s.begin() + i);
            }
        }
        s.erase(std::remove(s.begin(), s.end(), 'i'), s.end());
        return s;
    }
};