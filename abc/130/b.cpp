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

void solve() {
  int N, X;
  cin >> N >> X;
  int ans = 1, cur = 0;
  for (int i = 0; i < N; i++) {
    int l;
    cin >> l;
    cur += l;
    if (cur > X) {
      break;
    } else {
      ans++;
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
