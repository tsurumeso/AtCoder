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
  int N;
  cin >> N;
  vi H(N + 1, 0);
  string ans = "Yes";
  for (int i = 1; i < N + 1; i++) {
    cin >> H[i];
    if (H[i] - H[i - 1] == 0) {
      ;
    } else if (H[i] - H[i - 1] > 0) {
      H[i]--;
    } else {
      ans = "No";
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
