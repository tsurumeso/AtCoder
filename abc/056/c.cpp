#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef map<int, int> mi;
typedef pair<int, int> pi;
typedef long long ll;

void solve() {
  int X;
  cin >> X;
  int i = 0, cur = 0;
  while (cur < X) {
    cur += i;
    i++;
  }
  cout << i - 1 << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}