#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  vi A(3, 0);
  int ans = 1000000;
  for (int i = 0; i < 3; i++) cin >> A[i];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (i != j && j != k && i != k) {
          ans = min(ans, abs(A[j] - A[i]) + abs(A[k] - A[j]));
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}