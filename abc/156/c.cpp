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
  vector<int> X(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> X[i];
  }
  int ans = INF;
  sort(all(X));
  for (int i = X.front(); i <= X.back(); i++) {
    int tmp = 0;
    for (int j = 0; j < N; j++) {
      tmp += sqr(X[j] - i);
    }
    ans = min(ans, tmp);
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
