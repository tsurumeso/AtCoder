#include <bits/stdc++.h>
#include <algorithm>

#define rep(i, a, n) for (int i = a; i < n; i++)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A <= 8 && B <= 8)
    cout << "Yay!" << endl;
  else
    cout << ":(" << endl;
  return 0;
}