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

bool check(vector<vector<char>> &field, int x, int y) {
  for (int i = -1; i <= 1; i++) {
    for (int j = -1; j <= 1; j++) {
      if (i == 0 && j == 0) continue;
      int xi = x + i;
      int yj = y + j;
      while (xi >= 0 && xi < 8 && yj >= 0 && yj < 8) {
        if (field[xi][yj] == 'Q') return false;
        xi += i;
        yj += j;
      };
    }
  }
  return true;
}

bool dfs(vector<vector<char>> &field, int depth) {
  if (depth == 8) {
    return true;
  }
  for (int y = 0; y < 8; y++) {
    if (field[depth][y] == 'Q') {
      return dfs(field, depth + 1);
    }
  }
  for (int y = 0; y < 8; y++) {
    if (check(field, depth, y)) {
      field[depth][y] = 'Q';
      if (dfs(field, depth + 1)) return true;
      field[depth][y] = '.';
    }
  }
  return false;
}

void solve() {
  vector<vector<char>> field(8, vector<char>(8, '.'));
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> field[i][j];
    }
  }
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (field[i][j] == 'Q' && !check(field, i, j)) {
        cout << "No Answer" << endl;
        return;
      }
    }
  }
  if (!dfs(field, 0)) {
    cout << "No Answer" << endl;
    return;
  }
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cout << field[i][j];
    }
    cout << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();
  return 0;
}
