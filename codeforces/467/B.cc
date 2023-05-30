#include <bits/stdc++.h>

using namespace std;

int ans = 0;
int n, m, k;

void solve(vector<int> ps, int q){
    for(auto& p : ps){
        int dist = 0;
        int eor = p^q;
        while(eor){
          dist += eor & 1;
          eor >>= 1;
        }
        
        ans += dist <= k;
    }
}

int main() {
    cin >> n >> m >> k;
    // hamming dis > k
    vector<int> p(m);

    while(m--){
        cin >> p[m];
    }
    int fedor;
    cin >> fedor;
    solve(p, fedor);

    cout << ans;
}
