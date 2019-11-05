#include <bits/stdc++.h>
#include <algorithm>

#define rep1(i, a, n) for (int i = a; i < n; i++)
#define rep2(i, a, n) for (int i = n; i >= a; i--)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  int C[3][3];
  rep1(i, 0, 3) {
    rep1(j, 0, 3) { cin >> C[i][j]; }
  }

  string ans = "Yes";
  if ((C[0][1] - C[0][0]) != (C[1][1] - C[1][0])) ans = "No";
  if ((C[0][2] - C[0][1]) != (C[1][2] - C[1][1])) ans = "No";
  if ((C[1][1] - C[1][0]) != (C[2][1] - C[2][0])) ans = "No";
  if ((C[1][2] - C[1][1]) != (C[2][2] - C[2][1])) ans = "No";
  cout << ans << endl;

  return 0;
}