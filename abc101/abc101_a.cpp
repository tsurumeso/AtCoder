#include <bits/stdc++.h>
#include <algorithm>

#define rep1(i, a, n) for (int i = a; i < n; i++)
#define rep2(i, a, n) for (int i = n; i >= a; i--)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  rep1(i, 0, s.size()) { ans += s[i] == '+' ? 1 : -1; }
  cout << ans;
  return 0;
}