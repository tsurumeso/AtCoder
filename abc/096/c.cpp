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
  int H, W;
  cin >> H >> W;
  vector<vector<char>> S(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> S[i][j];
    }
  }
  string ans = "Yes";
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S[i][j] == '#') {
        bool flag = false;
        if (i > 0 && S[i - 1][j] == '#') {
          flag = true;
        }
        if (i < H - 1 && S[i + 1][j] == '#') {
          flag = true;
        }
        if (j > 0 && S[i][j - 1] == '#') {
          flag = true;
        }
        if (j < W - 1 && S[i][j + 1] == '#') {
          flag = true;
        }
        if (!flag) ans = "No";
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
