#include <bits/stdc++.h>

using namespace std;

void solve(string s){
    const int ss = s.size()-1;
    if(s[0] + s[1] + s[2] == s[ss] + s[ss-1] + s[ss-2])
        cout << "YES" << '\n';
    else 
        cout << "NO" << '\n';
}

int main() {
    int n;
    cin >> n;

    while(n--){
        string x;
        cin >> x;
        solve(x);
    }

}
