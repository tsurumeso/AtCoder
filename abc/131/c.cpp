#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

void solve() {
  ll A, B, C, D, ans = 0;
  cin >> A >> B >> C >> D;
  ll tmp = C * D / gcd(C, D);
  A -= 1;
  ans = B - (B / C + B / D - (B / tmp));
  ans -= A - ((A / C + A / D - A / tmp));
  cout << ans << endl;
  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
