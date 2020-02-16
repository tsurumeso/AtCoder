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
  ll L, R;
  cin >> L >> R;
  ll ans = INF;
  for (ll i = L; i <= L + 2019 && i < R; i++) {
    for (ll j = i + 1; j <= L + 2019 && j <= R; j++) {
      ans = min(ans, (i * j) % 2019LL);
    }
  }
  // for (ll i = L; i < R; i++) {
  //   for (ll j = i + 1; j <= R; j++) {
  //     ans = min(ans, (i * j) % 2019LL);
  //     if (ans == 0) break;
  //   }
  //   if (ans == 0) break;
  // }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
