/* easy :: stack */
/*
    Use a stack, the top popped must match
    the the closing bracket.
    - -       - -
    Time  :: O(n)
    Space :: O(n)
*/
class Solution {
public:
    bool isValid(string s)
    {
        stack<char> S;
        for (const char& cur : s)
        {
            if (cur == '(' || cur == '{' || cur == '[') {
                S.push(cur);
                continue;
            }
            if (S.empty() ||
                (cur == ')' && S.top() != '(') ||
                (cur == '}' && S.top() != '{') ||
                (cur == ']' && S.top() != '[')) {
                return false;
            }
            S.pop();
        }
        return S.empty();
    }
};