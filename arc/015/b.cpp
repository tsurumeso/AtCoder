#include <bits/stdc++.h>
#include <algorithm>

#define rep1(i, a, n) for (int i = a; i < n; i++)
#define rep2(i, a, n) for (int i = n; i >= a; i--)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

typedef long long ll;

int main() {
  int N;
  cin >> N;
  vector<int> ans(6, 0);
  rep1(i, 0, N) {
    float min_T, max_T;
    cin >> max_T >> min_T;
    if (max_T >= 35.0) {
      ans[0] += 1;
    } else if (max_T >= 30.0) {
      ans[1] += 1;
    } else if (max_T >= 25.0) {
      ans[2] += 1;
    }
    if (min_T >= 25.0) {
      ans[3] += 1;
    }
    if (min_T < 0.0 && max_T >= 0.0) {
      ans[4] += 1;
    }
    if (max_T < 0.0) {
      ans[5] += 1;
    }
  }
  rep1(i, 0, 6) cout << ans[i] << ((i == 5) ? '\n' : ' ');
  return 0;
}