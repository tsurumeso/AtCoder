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

bool check(string s) {
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] != s[i + 1]) return true;
  }
  return false;
}

void solve() {
  string s;
  int ans = 100;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    string tmp = s;
    while (check(tmp)) {
      for (int j = 0; j < tmp.size() - 1; j++) {
        if (tmp[j + 1] == s[i]) {
          tmp[j] = s[i];
        }
      }
      tmp.pop_back();
    }
    ans = min(ans, (int)(s.size() - tmp.size()));
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}