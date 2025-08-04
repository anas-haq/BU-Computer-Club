#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1, k = 1;
    cin >> test;

    while (test--) {
        int p, s, r; cin >> p >> s >> r;
        cout << "Case " << k << ": ";
        if (p == s and r != 1) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
    
    return 0;
}
