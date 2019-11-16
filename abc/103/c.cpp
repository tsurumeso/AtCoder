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
  vi A(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    ans += A[i] - 1;
  }
  cout << ans << endl;
  return 0;
}