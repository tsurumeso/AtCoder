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
  int N, M;
  cin >> N >> M;
  int ac = 0, wa = 0;
  map<int, int> sub;
  for (int i = 0; i < M; i++) {
    int prob;
    string judge;
    cin >> prob >> judge;
    if (sub[prob] >= 0 && judge == "WA") {
      sub[prob]++;
    } else if (sub[prob] >= 0 && judge == "AC") {
      ac++;
      wa += sub[prob];
      sub[prob] = -1;
    }
  }
  cout << ac << ' ' << wa << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
