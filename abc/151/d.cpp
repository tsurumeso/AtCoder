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

int col, row;
vector<vc> field;

const pii dir[] = {
    {-1, 0},
    {1, 0},
    {0, -1},
    {0, 1},
};

bool is_in_field(const pii p) {
  const int c = p.second;
  const int r = p.first;
  return (0 <= c && c < col) && (0 <= r && r < row);
}

int bfs(const pii start) {
  vector<vi> memo;
  for (int i = 0; i < row; ++i) {
    vi v(col, 0);
    memo.push_back(v);
  }

  queue<pii> q;
  q.push(start);

  while (!q.empty()) {
    pii cur = q.front();
    q.pop();

    for (const auto d : dir) {
      pii next = make_pair(cur.first + d.first, cur.second + d.second);
      if (is_in_field(next)) {
        const char p = field[next.first][next.second];
        if (p == '.' && next != start) {
          if (memo[next.first][next.second] == 0) {
            q.push(next);
            memo[next.first][next.second] = memo[cur.first][cur.second] + 1;
          }
        }
      }
    }
  }

  int ret = 0;
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
      ret = max(ret, memo[i][j]);
    }
  }

  return ret;
}

void solve() {
  cin >> row >> col;
  for (int i = 0; i < row; ++i) {
    vc v(col, 0);
    for (int j = 0; j < col; ++j) {
      cin >> v[j];
    }
    field.push_back(v);
  }

  int ans = 0;
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
      if (field[i][j] == '.') {
        pii start = make_pair(i, j);
        ans = max(ans, bfs(start));
      }
    }
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
