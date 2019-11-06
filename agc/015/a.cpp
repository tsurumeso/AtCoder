#include <bits/stdc++.h>
#include <algorithm>

#define rep1(i, a, n) for (int i = a; i < n; i++)
#define rep2(i, a, n) for (int i = n; i >= a; i--)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  long long N, A, B;
  long long ans;
  cin >> N >> A >> B;
  if (A > B || (A != B && N == 1)) {
    ans = 0;
  } else {
    long long min_s = B + (N - 1) * A;
    long long max_s = A + (N - 1) * B;
    ans = max_s - min_s + 1;
  }
  cout << ans << endl;
  return 0;
}