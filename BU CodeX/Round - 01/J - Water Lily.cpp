#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int h, l; cin >> h >> l;
    double ans = ((1.0*l*l) - (1.0*h*h)) / (2.0*h);
    cout << fixed << setprecision(7) << ans <<"\n";
    return 0;
}

