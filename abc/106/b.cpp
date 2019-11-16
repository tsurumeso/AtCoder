#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int N, ans = 0;
  cin >> N;
  for (int i = 1; i <= N; i += 2) {
    int cnt = 0;
    for (int j = 1; j <= N; j++) {
      if (i % j == 0) {
        cnt++;
      }
    }
    if (cnt == 8) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}