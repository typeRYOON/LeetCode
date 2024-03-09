/* easy :: two-pointers */
/*
    Use two pointers and iterate through both arrays in
    ascending order. Increment a pointer if its value is
    less than the other array's pointer value.
    - -               - -
    Time  :: O(min(n, m))
    Space :: O(1)
*/
class Solution {
public:
    int getCommon(vector<int>& n1, vector<int>& n2)
    {
        int n = n1.size(), m = n2.size();
        int a = 0, b = 0;

        // Iterate the shortest array:
        while (a < n && b < m)
        {
            // Common found:
            if (n1[a] == n2[b]) {
                return n1[a];
            }
            // Increment pointer if less:
            if (n1[a] < n2[b]) { a++; }
            else               { b++; }
        }
        return -1;
    }
};