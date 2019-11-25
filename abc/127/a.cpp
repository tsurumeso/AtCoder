#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int A, B, ans = 0;
  cin >> A >> B;
  if (A >= 13) {
    ans = B;
  } else if (A >= 6) {
    ans = B / 2;
  }
  cout << ans << endl;
  return 0;
}