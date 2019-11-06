#include <bits/stdc++.h>
#include <algorithm>

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

typedef long long ll;

int main() {
  int N, cnt2 = 0, cnt4 = 0;
  cin >> N;
  rep(i, N) {
    int a;
    cin >> a;
    if (a % 4 == 0) {
      cnt4++;
    } else if (a % 2 == 0) {
      cnt2++;
    }
  }
  string ans = "Yes";
  if (cnt2 == 0) {
    if ((N - 1) - cnt4 * 2 > 0) {
      ans = "No";
    }
  } else {
    if ((N - 1) - cnt4 * 2 - (cnt2 - 1) > 0) {
      ans = "No";
    }
  }
  cout << ans << endl;
  return 0;
}