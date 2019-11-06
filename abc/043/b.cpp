#include <bits/stdc++.h>
#include <algorithm>

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

typedef long long ll;

int main() {
  string s, ans;
  cin >> s;
  rep(i, s.size()) {
    if (ans.size() > 0 && s[i] == 'B')
      ans = ans.erase(ans.size() - 1);
    else if (s[i] != 'B')
      ans += s[i];
  }
  cout << ans << endl;
  return 0;
}