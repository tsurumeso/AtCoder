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
  int N;
  cin >> N;
  vector<vector<int>> dp(N + 1, vector<int>(3, 0));
  for (int i = 0; i < N; i++) {
    vector<int> p(3, 0);
    for (int j = 0; j < 3; j++) {
      cin >> p[j];
    }
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (j == k) continue;
        dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + p[k]);
      }
    }
  }
  cout << max(max(dp[N][0], dp[N][1]), dp[N][2]) << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
