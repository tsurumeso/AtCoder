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
typedef map<int, int> mii;
typedef long long ll;

const int MOD = 1000000007;
const int INF = 1000000007;

int dp[105][4][2];

void solve() {
  string S;
  int K;
  cin >> S >> K;
  int L = S.size();
  dp[0][0][0] = 1;
  for (int i = 0; i <= L; i++) {
    for (int j = 0; j <= K; j++) {
      for (int k = 0; k < 2; k++) {
        int sd = S[i] - '0';
        for (int d = 0; d < 10; d++) {
          int ni = i + 1, nj = j, nk = k;
          if (d != 0) nj++;
          if (nj > K) continue;
          if (k == 0) {
            if (d > sd) continue;
            if (d < sd) nk = 1;
          }
          dp[ni][nj][nk] += dp[i][j][k];
        }
      }
    }
  }
  int ans = dp[L][K][0] + dp[L][K][1];
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
