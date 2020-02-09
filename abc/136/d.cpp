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
  string S;
  cin >> S;
  int N = S.size(), cnt = 0;
  vi ans(N, 0);
  for (int i = 0; i < N; i++) {
    if (S[i] == 'R') {
      cnt++;
    } else {
      ans[i] += cnt / 2;
      ans[i - 1] += cnt - (cnt / 2);
      cnt = 0;
    }
  }
  cnt = 0;
  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == 'L') {
      cnt++;
    } else {
      ans[i] += cnt / 2;
      ans[i + 1] += cnt - (cnt / 2);
      cnt = 0;
    }
  }
  for (int i = 0; i < N; i++) cout << ans[i] << ' ';
  cout << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
