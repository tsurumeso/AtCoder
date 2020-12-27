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
  int N, X, Y;
  cin >> N >> X >> Y;
  X--;
  Y--;
  vector<int> ans(N, 0);
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int d = min(j - i, abs(i - X) + 1 + abs(j - Y));
      ans[d]++;
    }
  }
  for (int i = 1; i < N; i++) {
    cout << ans[i] << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
