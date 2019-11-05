#include <bits/stdc++.h>
#include <algorithm>

#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

typedef long long ll;

int main() {
  string s, t;
  cin >> s >> t;
  asc(s);
  asc(t);
  if (s.size() < t.size()) {
    bool flag = true;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != t[i]) flag = false;
    }
    if (flag) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < t.size(); j++) {
      if (s[i] < t[j]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}