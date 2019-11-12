#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int N;
  cin >> N;
  vi D(N, 0), cnt(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> D[i];
    if (i == 0) {
      if (D[i] != 0) {
        cout << 0 << endl;
        return 0;
      }
    } else if (D[i] == 0) {
      cout << 0 << endl;
      return 0;
    }
    cnt[D[i]] += 1;
  }
  ll ans = 1;
  if (D[0] != 0) {
    ans = 0;
  } else {
    for (int i = 1; i < N; i++) {
      for (int j = 0; j < cnt[i]; j++) {
        ans *= cnt[i - 1];
        ans %= 998244353;
      }
    }
  }
  cout << ans << endl;
  return 0;
}