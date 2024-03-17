/* hard :: dynamic-programming */
/* 
    Build a dynamic programming table and update it based
    on the matching rules. Return whether the entire string
    matches the pattern string.
    - -           - -
    Time  :: O(m * n)
    Space :: O(m * n)
*/
class Solution {
public:
    bool isMatch(string s, string p)
    {
        int m = s.length(), n = p.length();
        
        // Create a DP table, initialized with false ::
        vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));
        
        // Empty string and empty pattern always match ::
        dp[0][0] = true;
        
        // Handle patterns like a*, a*b*, a*b*c*, etc ::
        for (int j = 1; j <= n; j++) {
            if (p[j-1] == '*') {
                dp[0][j] = dp[0][j-2];
            }
        }
        
        // Fill the DP table  ::
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (p[j-1] == '.' || p[j-1] == s[i-1]) {
                    dp[i][j] = dp[i-1][j-1];
                }
                else if (p[j-1] == '*') {
                    // Zero occurrence of preceding element ::
                    dp[i][j] = dp[i][j-2];
                    if (p[j-2] == '.' || p[j-2] == s[i-1]) {
                        // One or more occurrence of preceding element ::
                        dp[i][j] = dp[i][j] || dp[i-1][j]; 
                    }
                }
            }
        }
        return dp[m][n];
    }
};