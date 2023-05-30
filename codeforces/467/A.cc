#include <bits/stdc++.h>

using namespace std;

int ans = 0;

void solve(int p, int q){
    ans += (q - p) >= 2;    
}

int main() {
    int n;
    cin >> n;

    while(n--){
        int p,q;
        cin >> p >> q;
        solve(p, q);
    }

    cout << ans;
}
