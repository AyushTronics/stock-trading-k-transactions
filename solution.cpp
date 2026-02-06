
/*
Problem: Maximum Profit with At Most K Transactions
Approach:
- State-compressed DP
- Odd index  -> Buy state
- Even index -> Sell state
- Optimized space to O(k)

Time Complexity: O(n * k)
Space Complexity: O(k)
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if (n < 2 || k == 0) return 0;

        k = min(k, n / 2);

        const int INF = 1e9;
        vector<int> dp(2 * k + 1, 0);

        for (int j = 1; j <= 2 * k; j += 2) {
            dp[j] = -INF;  // Buy states
        }

        for (int price : prices) {
            for (int j = 1; j <= 2 * k; j++) {
                if (j % 2 == 1) {
                    dp[j] = max(dp[j], dp[j - 1] - price);
                } else {
                    dp[j] = max(dp[j], dp[j - 1] + price);
                }
            }
        }

        return dp[2 * k];
    }
};
