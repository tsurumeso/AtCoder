#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef map<int, int> mi;
typedef pair<int, int> pi;
typedef long long ll;

void solve() {
  string S;
  cin >> S;
  int n = S.size();
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (S[i] == 'U')
      ans += n - i - 1 + 2 * i;
    else
      ans += 2 * (n - i - 1) + i;
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}