#include <bits/stdc++.h>
#include <algorithm>

#define rep1(i, a, n) for (int i = a; i < n; i++)
#define rep2(i, a, n) for (int i = n; i >= a; i--)
#define asc(v) sort(v.begin(), v.end())
#define desc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main() {
  int A, B, K;
  cin >> A >> B >> K;
  vector<int> arr_A;
  vector<int> arr_B;
  rep1(i, 1, A + 1) if (A % i == 0) arr_A.push_back(i);
  rep1(i, 1, B + 1) if (B % i == 0) arr_B.push_back(i);
  int cnt = 0;
  rep2(i, 0, arr_A.size() - 1) {
    rep2(j, 0, arr_B.size() - 1) {
      if (arr_A[i] == arr_B[j]) cnt++;
      if (cnt == K) {
        cout << arr_A[i] << endl;
        return 0;
      }
    }
  }
  return 1;
}