#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

void solve() {
  int N;
  cin >> N;
  vector<vector<pair<int, int>>> xy(N);
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    xy[i].resize(A);
    for (int j = 0; j < A; j++) {
      cin >> xy[i][j].first >> xy[i][j].second;
    }
  }
  int ans = 0;
  for (int bits = 0; bits < (1 << N); bits++) {
    int cnt = 0;
    bool flag = true;
    for (int i = 0; i < N; i++) {
      if ((bits >> i) & 1) {
        for (int j = 0; j < xy[i].size(); j++) {
          if (xy[i][j].second != ((bits >> xy[i][j].first - 1) & 1)) {
            flag = false;
          }
        }
        cnt++;
      }
    }
    if (flag) ans = max(ans, cnt);
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
