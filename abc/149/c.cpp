#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;

bool is_prime(int x) {
  if (x <= 1) return false;
  for (int i = 2; i * i < x; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

void solve() {
  int X;
  cin >> X;
  int p = X;
  while (!is_prime(p)) p++;
  cout << p << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
