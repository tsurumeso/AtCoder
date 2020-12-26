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
  vector<ll> A(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  sort(all(A));
  vector<ll> tmp(N, A[0]);
  ll ans = 0;
  for (int i = 1; i < N; i++) {
    tmp[i] = tmp[i - 1] + A[i];
    ans += i * A[i] - tmp[i - 1];
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
