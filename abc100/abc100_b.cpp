#include <bits/stdc++.h>
#include <algorithm>

#define rep(i, a, n) for (int i = a; i < n; i++)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  int D, N;
  cin >> D >> N;
  if (D == 0) {
    cout << N + (N / 100) << endl;
  } else if (D == 1) {
    cout << (N + (N / 100)) * 100 << endl;
  } else if (D == 2) {
    cout << (N + (N / 100)) * 100 * 100 << endl;
  }
  return 0;
}