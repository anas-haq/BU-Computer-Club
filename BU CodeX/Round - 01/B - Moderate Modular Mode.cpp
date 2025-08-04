#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    while (test--) {
    	int x,y; cin >> x >> y;
	    if(x > y){
			cout<< (x+y) <<'\n';
		}
		else {
			cout<< y-((y%x)/2) <<'\n';
		}
    }
    
    return 0;
}
