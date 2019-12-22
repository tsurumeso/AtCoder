#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

void solve() {
  int A, B;
  cin >> A >> B;
  if (A != 1 && B != 1) {
    cout << 1 << endl;
  } else if (A != 2 && B != 2) {
    cout << 2 << endl;
  } else if (A != 3 && B != 3) {
    cout << 3 << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
