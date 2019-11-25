#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int r, D, cur;
  cin >> r >> D >> cur;
  for (int i = 0; i < 10; i++) {
    cur = r * cur - D;
    cout << cur << endl;
  }
  return 0;
}