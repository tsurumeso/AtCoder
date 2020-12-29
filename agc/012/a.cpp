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
  vector<int> A(3 * N, 0);
  for (int i = 0; i < 3 * N; i++) {
    cin >> A[i];
  }
  sort(rall(A));
  ll ans = 0;
  for (int i = 1; i < 2 * N; i += 2) {
    ans += A[i];
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
