#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define Rep(i, a, n) for (int i = (int)(a); i < (int)(n); i++)
#define rep(i, n) Rep(i, 0, n)
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  vi arr(5, 0);
  rep(i, 5) cin >> arr[i];
  sort(all(arr));
  cout << max(arr[4] + arr[3] + arr[0], arr[4] + arr[2] + arr[1]) << endl;
  return 0;
}