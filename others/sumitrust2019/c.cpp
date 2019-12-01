#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

void solve() {
  int X;
  cin >> X;
  int div = X / 100;
  int tmp = X % 100;
  for (int i = 0; i < div; i++) {
    if (tmp >= 5) {
      tmp -= 5;
    } else {
      tmp -= tmp;
    }
  }
  if (tmp <= 0) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
