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

int dp[101][101];

void solve() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> f(H, vector<char>(W));
  vector<vector<int>> dp(H, vector<int>(W, INF));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> f[i][j];
    }
  }
  dp[0][0] = f[0][0] == '#';
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (i > 0) {
        if (f[i - 1][j] == '.' && f[i][j] == '#') {
          dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
        } else {
          dp[i][j] = min(dp[i][j], dp[i - 1][j]);
        }
      }
      if (j > 0) {
        if (f[i][j - 1] == '.' && f[i][j] == '#') {
          dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
        } else {
          dp[i][j] = min(dp[i][j], dp[i][j - 1]);
        }
      }
    }
  }
  cout << dp[H - 1][W - 1] << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
