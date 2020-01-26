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

void solve() {
  int H, N;
  cin >> H >> N;
  vi dp(H + 1, INF);
  dp[0] = 0;
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    for (int j = 0; j < H; j++) {
      int nj = min(j + a, H);
      dp[nj] = min(dp[nj], dp[j] + b);
    }
  }
  cout << dp[H] << endl;
  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
