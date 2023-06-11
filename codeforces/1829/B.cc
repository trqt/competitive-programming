#include <bits/stdc++.h>

using namespace std;


void solve(int n){
    int acc = 0;
    int big = 0;
    while(n--){
        int x;
        cin >> x;
        acc = x ? 0 : acc+1;
        if(acc > big) big = acc;
    }

    cout << big << '\n';
}

int main() {
    int n;
    cin >> n;

    while(n--){
        int m;
        cin >> m;
        solve(m);

    }

}
