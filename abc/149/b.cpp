#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;

void solve() {
  ll A, B, K;
  cin >> A >> B >> K;
  ll ans_A = max(0LL, A - K);
  ll ans_B = max(0LL, B - (K - (A - ans_A)));
  cout << ans_A << ' ' << ans_B << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
