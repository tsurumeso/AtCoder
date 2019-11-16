#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  string S, T;
  string ans = "No";
  cin >> S >> T;
  for (int i = 0; i < S.size(); i++) {
    if (S == T) {
      ans = "Yes";
      break;
    }
    S = S[S.size() - 1] + S.substr(0, S.size() - 1);
  }
  cout << ans << endl;
  return 0;
}