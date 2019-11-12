#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
  ll A, B, C, D, ans = 0;
  cin >> A >> B >> C >> D;
  ll tmp = C * D / gcd(C, D);
  A -= 1;
  ans = B - (B / C + B / D - (B / tmp));
  ans -= A - ((A / C + A / D - A / tmp));
  cout << ans << endl;
  return 0;
}