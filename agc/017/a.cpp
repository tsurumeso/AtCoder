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

vector<vll> cmb(vector<vll> &v) {
  for (int i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++) {
    for (int k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
    }
  }
  return v;
}

void solve() {
  int N, P;
  cin >> N >> P;
  int odd = 0, even = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (a % 2 == 0)
      even++;
    else
      odd++;
  }
  // ll ans = 0;
  // vector<vll> v(N + 1, vll(N + 1, 0));
  // cmb(v);
  // for (int i = 0; i <= even; i++) {
  //   for (int j = P; j <= odd; j += 2) {
  //     ans += v[odd][j] * v[even][i];
  //   }
  // }
  ll ans = 0;
  if (odd == 0) {
    ans = P == 0 ? (1LL << N) : 0;
  } else {
    ans = 1LL << N - 1;
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
