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
  int C[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> C[i][j];
    }
  }

  string ans = "Yes";
  if ((C[0][1] - C[0][0]) != (C[1][1] - C[1][0])) ans = "No";
  if ((C[0][2] - C[0][1]) != (C[1][2] - C[1][1])) ans = "No";
  if ((C[1][1] - C[1][0]) != (C[2][1] - C[2][0])) ans = "No";
  if ((C[1][2] - C[1][1]) != (C[2][2] - C[2][1])) ans = "No";
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
