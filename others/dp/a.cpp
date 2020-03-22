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
  vector<int> H(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }
  vector<int> dp(N, INF);
  dp[0] = 0;
  dp[1] = abs(H[1] - H[0]);
  for (int i = 2; i < N; i++) {
    int cost1 = abs(H[i] - H[i - 1]);
    int cost2 = abs(H[i] - H[i - 2]);
    dp[i] = min(dp[i - 1] + cost1, dp[i - 2] + cost2);
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
