#include <bits/stdc++.h>
#include <algorithm>

#define rep1(i, a, n) for (int i = a; i < n; i++)
#define rep2(i, a, n) for (int i = n; i >= a; i--)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  if ((N - 1) % (K - 1) == 0) {
    cout << (N - 1) / (K - 1) << endl;
  } else {
    cout << ((N - 1) / (K - 1)) + 1 << endl;
  }
  return 0;
}