#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> factors(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                factors[i].push_back(j);
                if (i / j != j) {
                    factors[i].push_back(i / j);
                }
            }
        }
    }

    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        dp[1][i] = 1;
    }

    for (int len = 2; len <= k; len++) {
        for (int last = 1; last <= n; last++) {
            long long ways = 0;
            for (int x : factors[last]) {
                ways += dp[len - 1][x];
            }
            dp[len][last] = ways % MOD;
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (ans + dp[k][i]) % MOD;
    }

    cout << ans << endl
    return 0;
}

