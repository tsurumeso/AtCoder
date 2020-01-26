#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef pair<int, int> pii;
typedef long long ll;

const int MOD = 1000000007;

ll extgcd(int a, int b, ll &x, ll &y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  ll d = extgcd(b, a % b, y, x);
  y -= a / b * x;
  return d;
}

void cmbmod_init(int n, vll &fac, vll &finv) {
  ll x, y;
  for (int i = 2; i <= n; i++) {
    fac[i] = fac[i - 1] * i % MOD;
    extgcd(i, MOD, x, y);
    finv[i] = finv[i - 1] * (MOD + x % MOD) % MOD;
  }
}

// void cmbmod_init(int n, vll &fac, vll &finv) {
//   vll inv(n + 1, 1);
//   for (int i = 2; i <= n; i++) {
//     fac[i] = fac[i - 1] * i % MOD;
//     inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
//     finv[i] = finv[i - 1] * inv[i] % MOD;
//   }
// }

ll cmbmod(int n, int k, vll &fac, vll &finv) {
  if (n < k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

void solve() {
  int N, K;
  cin >> N >> K;
  vi A(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  vll fac(N + 1, 1), finv(N + 1, 1);
  cmbmod_init(N, fac, finv);
  sort(all(A));
  ll sum = 0;
  for (int i = 0; i < N; i++) {
    sum -= A[i] * cmbmod(N - i - 1, K - 1, fac, finv) % MOD;
    sum += A[i] * cmbmod(i, K - 1, fac, finv) % MOD;
    sum %= MOD;
  }
  cout << sum << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
