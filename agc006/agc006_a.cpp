#include <bits/stdc++.h>
#include <algorithm>

#define vi vector<int>
#define vvi vector<vi>

using namespace std;

typedef long long ll;

int main() {
  int N, ans;
  string s, t;
  cin >> N >> s >> t;
  for (int i = 0; i <= s.size(); i++) {
    bool flag = true;
    for (int j = i; j < s.size(); j++) {
      if (s[j] != t[j - i]) {
        flag = false;
      }
    }
    if (flag) {
      ans = N + i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}