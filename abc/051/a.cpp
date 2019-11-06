#include <bits/stdc++.h>
#include <algorithm>

#define rep(i, a, n) for (int i = a; i < n; i++)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  string s;
  cin >> s;
  s[5] = ' ';
  s[13] = ' ';
  cout << s << endl;
  return 0;
}