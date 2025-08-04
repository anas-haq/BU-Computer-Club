#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
int d[N];

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 1; i < N; i++) {
    for (int j = i; j < N; j += i) {
      d[j]++;
    }
  }

  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    if (d[i] == 2) {
    	cout << i <<" ";
    }
  }

  return 0;
}
