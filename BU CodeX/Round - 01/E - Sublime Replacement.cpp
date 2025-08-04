#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e9;

void Anas() {
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    ll ans = 0, sum = 0, cnt = 0, cur = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == -1){
            cnt++;
            ans = max(ans, sum + (cnt*N));
        }
        else if(v[i] >= cur){
            sum+=(v[i]*(cnt+1));
            cur = v[i];
            ans = max(ans,sum);
            cnt = 0;
        }
        else{
            sum = cur = v[i];
            if(i and v[i-1] == -1) sum += (cur * cnt);
            ans = max(ans,sum);
            cnt = 0;            
        }
    }
    cout << ans <<"\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    while (test--) {
       Anas();
    }
    
    return 0;
}