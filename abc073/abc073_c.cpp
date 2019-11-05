#include <bits/stdc++.h>
#include <algorithm>

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

typedef long long ll;

int main() {
  int N, ptr = 0, ans = 0;
  cin >> N;
  vi A(N, 0);
  rep(i, N) cin >> A[i];
  sort(all(A));
  while (ptr < N) {
    int cur = A[ptr], cnt = 0;
    while (ptr < N && cur == A[ptr]) {
      cnt++;
      ptr++;
    }
    ans += cnt % 2;
  }
  cout << ans << endl;
  return 0;
}