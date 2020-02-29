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

ll modpow(ll a, ll n) {
  a %= MOD;
  if (n == 0) return 1;
  if (n % 2 == 1) return a * modpow(a, n - 1) % MOD;
  ll ret = modpow(a, n / 2);
  ret = sqr(ret) % MOD;
  return ret;
}

ll modcmb(ll n, ll r) {
  ll ret = 1;
  for (int i = 0; i < r; i++) {
    ret *= (n - i);
    ret %= MOD;
    ret *= modpow(i + 1, MOD - 2);
    ret %= MOD;
  }
  return ret;
}

void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  ll ans = modpow(2, n) - 1;
  ans -= modcmb(n, a);
  ans -= modcmb(n, b);
  cout << (ans + 2 * MOD) % MOD << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
