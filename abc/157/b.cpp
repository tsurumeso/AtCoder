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
  vector<vector<int>> A(3, vector<int>(3, 0));
  vector<vector<bool>> appear(3, vector<bool>(3, 0));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> A[i][j];
    }
  }
  int N;
  cin >> N;
  vector<int> B(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < N; k++) {
        if (A[i][j] == B[k]) {
          appear[i][j] = true;
          break;
        }
      }
    }
  }
  string ans = "No";
  for (int i = 0; i < 3; i++) {
    if (appear[i][0] && appear[i][1] && appear[i][2]) ans = "Yes";
    if (appear[0][i] && appear[1][i] && appear[2][i]) ans = "Yes";
  }
  if (appear[0][0] && appear[1][1] && appear[2][2]) ans = "Yes";
  if (appear[2][0] && appear[1][1] && appear[0][2]) ans = "Yes";
  cout << ans << endl;
  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
