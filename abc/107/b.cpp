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
  vector<vector<char>> A(H, vector<char>(W, 0));
  map<int, bool> cols, rows;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (A[i][j] == '#') {
        cols[i] = true;
        rows[j] = true;
      }
    }
  }
  for (int i = 0; i < H; i++) {
    if (cols[i]) {
      for (int j = 0; j < W; j++) {
        if (rows[j]) {
          cout << A[i][j];
        }
      }
      cout << endl;
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
