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
  int N, K;
  cin >> N >> K;
  vector<int> H(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }
  vector<int> dp(N, INF);
  dp[0] = 0;
  for (int i = 1; i < N; i++) {
    for (int j = 1; j <= min(i, K); j++) {
      dp[i] = min(dp[i], dp[i - j] + abs(H[i - j] - H[i]));
    }
  }
  cout << dp[N - 1] << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
