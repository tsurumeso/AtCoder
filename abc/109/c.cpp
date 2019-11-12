#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
  int N, X;
  cin >> N >> X;
  vi pos(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> pos[i];
    pos[i] = abs(pos[i] - X);
  }
  int ans = 0;
  for (int i = 0; i < N; i++) {
    ans = gcd(pos[i], ans);
  }
  cout << ans << endl;
  return 0;
}