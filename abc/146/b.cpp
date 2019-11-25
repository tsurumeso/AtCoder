#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define sqr(x) ((x) * (x))
#define all(v) (v).begin(), (v).end()

typedef vector<int> vi;
typedef map<int, int> mi;
typedef pair<int, int> pi;
typedef long long ll;

int main() {
  int N;
  string S;
  string arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cin >> N >> S;
  for (int i = 0; i < S.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
      if (S[i] == arr[j]) {
        cout << arr[(j + N) % arr.size()];
        break;
      }
    }
  }
  cout << endl;
  return 0;
}