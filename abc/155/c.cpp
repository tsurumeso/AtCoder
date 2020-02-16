#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef long long ll;

const int MOD = 1000000007;
const int INF = 1000000007;

void solve() {
  int N;
  cin >> N;
  map<string, int> S;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    S[s]++;
  }
  int mx = 0;
  for (auto x : S) {
    mx = max(mx, x.second);
  }
  vector<string> ans;
  for (auto x : S) {
    if (x.second == mx) {
      ans.push_back(x.first);
    }
  }
  sort(all(ans));
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
