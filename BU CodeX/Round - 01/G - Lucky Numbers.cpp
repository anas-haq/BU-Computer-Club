#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int x = n%10, y = n/10;
    if (x%y == 0 or y%x == 0){
    	cout <<"YES\n";
    }
    else{
    	cout <<"NO\n";
    }
    
    return 0;
}
