#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector<vi>

typedef long long ll;

int main() {
  int m, n, N;
  cin >> m >> n >> N;
  int sell = N, sum = N;
  while (sell >= m) {
    int new_pen = (sell / m) * n;
    sum += new_pen;
    sell = (sell % m) + new_pen;
  }
  cout << sum << endl;
  return 0;
}