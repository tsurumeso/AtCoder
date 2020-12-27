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
  string S;
  string ans = "NO";
  cin >> S;
  for (int i = 0; i < S.size(); i++) {
    for (int j = 0; j <= S.size() - i; j++) {
      string tmp = S;
      if (tmp.erase(i, j) == "keyence") {
        ans = "YES";
      }
    }
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
