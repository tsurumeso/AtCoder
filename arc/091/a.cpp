#include <bits/stdc++.h>
#include <algorithm>

#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

typedef long long ll;

int main() {
  ll N, M;
  cin >> N >> M;
  if (N == 1 && M >= 2)
    cout << M - 2 << endl;
  else if (M == 1 && N >= 2)
    cout << N - 2 << endl;
  else if (N == 1 && M == 1)
    cout << 1 << endl;
  else
    cout << (N - 2) * (M - 2) << endl;
  return 0;
}