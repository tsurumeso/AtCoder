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
  int hi = stoi(S.substr(0, 2));
  int lo = stoi(S.substr(2, 2));
  if ((hi == 0 || hi > 12) && (lo == 0 || lo > 12)) {
    cout << "NA" << endl;
  } else if (hi >= 1 && hi <= 12) {
    if (lo == 0 || lo > 12) {
      cout << "MMYY" << endl;
    } else {
      cout << "AMBIGUOUS" << endl;
    }
  } else {
    if (lo >= 1 && lo <= 12) {
      cout << "YYMM" << endl;
    } else {
      cout << "AMBIGUOUS" << endl;
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}