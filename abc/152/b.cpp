#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef pair<int, int> pii;
typedef long long ll;

const int MOD = 1000000007;

void solve() {
  int a, b;
  cin >> a >> b;
  string A, B;
  for (int i = 0; i < a; i++) {
    B += (char)(b + '0');
  }
  for (int i = 0; i < b; i++) {
    A += (char)(a + '0');
  }
  string ans = A < B ? A : B;
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
