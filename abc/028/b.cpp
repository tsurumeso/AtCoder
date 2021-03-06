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
  string S;
  string A = "ABCDEF";
  vector<int> cnt(6, 0);
  cin >> S;
  for (int i = 0; i < A.size(); i++) {
    cnt[i] = count(all(S), A[i]);
  }
  cout << cnt[0];
  for (int i = 1; i < 6; i++) {
    cout << ' ' << cnt[i];
  }
  cout << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
