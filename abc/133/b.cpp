#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef long long ll;

const int MOD = 1000000007;
const int INF = 1000000007;

void solve() {
  int N, D;
  cin >> N >> D;
  vector<vector<int>> X(N, vector<int>(D, 0));
  for (int i = 0; i < N; i++) {
    vector<int> x(D, 0);
    for (int j = 0; j < D; j++) {
      cin >> x[j];
    }
    X[i] = x;
  }
  int ans = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int sum = 0;
      for (int k = 0; k < D; k++) {
        sum += sqr(X[i][k] - X[j][k]);
      }
      if (sqr((int)sqrt(sum)) == sum) {
        ans++;
      }
    }
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
