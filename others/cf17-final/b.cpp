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
  cin >> S;
  vector<int> cnt(3, 0);
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'a') cnt[0]++;
    if (S[i] == 'b') cnt[1]++;
    if (S[i] == 'c') cnt[2]++;
  }
  sort(all(cnt));
  string ans = "YES";
  if (cnt[2] - cnt[0] > 1) ans = "NO";
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // cout << fixed << setprecision(12);

  solve();

  return 0;
}
