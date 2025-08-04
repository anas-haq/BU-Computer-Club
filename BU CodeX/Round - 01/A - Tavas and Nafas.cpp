#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    	string a[13] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
	string b[13] = {"","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	string c[13] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	
	int n; cin >> n;

	if(n <= 10) {
		cout << a[n] <<"\n";
		return 0;
	}
	else if(n >= 11 and n <= 19) {
		cout << b[n-10] <<"\n";
		return 0;
	}	
	cout << c[n/10];
	if(n%10) {
		cout << "-" << a[n%10] <<"\n";
	}
    
    return 0;
}

