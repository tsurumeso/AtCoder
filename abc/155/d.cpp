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
  ll K;
  cin >> N >> K;
  vector<ll> A(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  sort(all(A));
  ll l = -INFLL, r = INFLL;
  // binary search
  while (l + 1 < r) {
    ll x = (l + r) / 2;
    ll tot = 0;
    for (int i = 0; i < N; i++) {
      int il = -1, ir = N;
      if (A[i] < 0) {
        while (il + 1 < ir) {
          int ix = (il + ir) / 2;
          if (A[i] * A[ix] < x) {
            ir = ix;
          } else {
            il = ix;
          }
        }
        tot += N - ir;
      } else {
        while (il + 1 < ir) {
          int ix = (il + ir) / 2;
          if (A[i] * A[ix] < x) {
            il = ix;
          } else {
            ir = ix;
          }
        }
        tot += ir;
      }
      if (A[i] * A[i] < x) tot--;
    }
    tot /= 2;
    if (tot < K) {
      l = x;
    } else {
      r = x;
    }
  }
  cout << l << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
