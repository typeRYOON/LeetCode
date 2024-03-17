/* medium :: two-pointers */
/* 
    Sort to avoid duplicates. For each nums[i], 
    do a two sum problem while avoiding duplicate
    triplets.
    - -             - -
    Time  :: O(nlog(n))
    Space :: O(1)
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> ret;
        sort(nums.begin(), nums.end());
        int low, high, sum, lastLow, lastHigh;
        int n = nums.size();

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] > 0) { break; }
            if (i > 0 && nums[i] == nums[i - 1]) { continue; }
            low = i + 1, high = n - 1;
            // Two Sum ::
            while (low < high)
            {
                sum = nums[i] + nums[low] + nums[high];
                // Move pointers towards zero sum ::
                if      (sum > 0) { high--; }
                else if (sum < 0) { low++ ; }
                else
                {
                    ret.push_back({nums[i], nums[low], nums[high]});
                    lastLow = nums[low], lastHigh = nums[high];
                    // Find next distinct low and high ::
                    while (low < high && nums[low] == lastLow) {
                        low++;
                    }
                    while (low < high && nums[high] == lastHigh) {
                        high--;
                    }
                }
            }
        }
        return ret;
    }
};