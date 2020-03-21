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

int N;

void dfs(string s, char mx) {
  if (N == s.size()) {
    cout << s << endl;
  } else {
    for (char c = 'a'; c <= mx; c++) {
      dfs(s + c, (c == mx) ? (mx + 1) : mx);
    }
  }
}

void solve() {
  cin >> N;
  dfs("", 'a');
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
