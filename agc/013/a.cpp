#include <bits/stdc++.h>
#include <algorithm>

#define vi vector<int>
#define vvi vector<vi>
#define rep1(i, a, n) for (int i = a; i < n; i++)
#define rep2(i, a, n) for (int i = n; i >= a; i--)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

typedef long long ll;

int main() {
  int N, sign = 0, ans = 1;
  cin >> N;
  vi A(N, 0);
  rep1(i, 0, N) cin >> A[i];

  rep1(i, 0, N - 1) {
    if (A[i] == A[i + 1]) {
      continue;
    }
    int tmp = A[i] < A[i + 1] ? 1 : -1;
    if (tmp * sign < 0) {
      ans++;
      tmp = 0;
    }
    sign = tmp;
  }
  cout << ans << endl;
  return 0;
}