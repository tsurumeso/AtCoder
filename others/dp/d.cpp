#include <bits/stdc++.h>

#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef long long ll;

const int MOD = 1000000007;
const int INF = 1000000007;
const ll INFLL = 1000000000000000007LL;

void solve() {
  int N, W;
  cin >> N >> W;
  vector<vector<ll>> dp(N + 1, vector<ll>(W + 1, 0));
  for (int i = 0; i < N; i++) {
    int w, v;
    cin >> w >> v;
    for (int j = 0; j <= W; j++) {
      if (j >= w) {
        dp[i + 1][j] = max(dp[i][j - w] + v, dp[i][j]);
      } else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  cout << dp[N][W] << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
