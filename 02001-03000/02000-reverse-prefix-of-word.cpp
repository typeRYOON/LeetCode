/* easy :: string */
/*
    At the first instance of ch,
    reverse the input string up
    to that index.
    - -                 - -
    Time  :: O(n) ::    7ms
    Space :: O(1) :: 7.42MB
*/
class Solution {
public:
    string reversePrefix(string word, const char ch)
    {
        for (uint8_t i = 0; i < word.length(); ++i)
        {
            if (word[i] == ch)
            {
                reverse(word.begin(), word.begin() + i + 1);
                break;
            }
        }
        return word;
    }
};