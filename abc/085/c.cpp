#include <bits/stdc++.h>
#include <algorithm>

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

typedef long long ll;

int main() {
  int N, Y;
  cin >> N >> Y;
  rep(i, N + 1) {
    rep(j, N - i + 1) {
      int z = N - i - j;
      if (Y == 10000 * i + 5000 * j + 1000 * z) {
        cout << i << ' ' << j << ' ' << z << endl;
        return 0;
      }
    }
  }
  cout << -1 << ' ' << -1 << ' ' << -1 << endl;
  return 0;
}