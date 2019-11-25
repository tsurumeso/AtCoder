#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()

typedef vector<int> vi;
typedef map<int, int> mi;
typedef pair<int, int> pi;
typedef long long ll;

int main() {
  ll K, A, B;
  cin >> K >> A >> B;
  if (B - A < 2) {
    cout << K + 1 << endl;
  } else {
    ll x = K - A + 1;
    ll ans = A + (x / 2) * (B - A) + x % 2;
    cout << ans << endl;
  }
  return 0;
}