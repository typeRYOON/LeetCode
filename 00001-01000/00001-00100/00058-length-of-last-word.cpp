/* easy :: string */
/*
    Check for whitespace at the end.
    Reverse through string.
    - -       - -
    Time  :: O(n)
    Space :: O(1)
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int r = s.length() - 1, ret = 0;
        bool inWord = false;
        while (r >= 0)
        {
            if (inWord) { 
                if (s[r] == ' ') { break; }
                ret++;
            }
            else if (!inWord && s[r] != ' ') {
                inWord = true;
                ret++;
            }
            r--;
        }
        return ret;
    }
};