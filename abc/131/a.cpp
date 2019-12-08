#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

typedef vector<int> vi;
typedef long long ll;

void solve() {
  string S;
  cin >> S;
  for (int i = 0; i < S.size() - 1; i++) {
    if (S[i] == S[i + 1]) {
      cout << "Bad" << endl;
      return;
    }
  }
  cout << "Good" << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}
