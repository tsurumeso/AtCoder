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
  int a, b, c, ans = 100000;
  cin >> a >> b >> c;
  ans = min(a + b, ans);
  ans = min(a + c, ans);
  ans = min(b + c, ans);
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
