#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        
        if(v[0] &1){
            puts("YES");
            continue;
        }

        // if any number odd then no
        for(int i = 0; i < n; i++){
            if(v[i] & 1){
                puts("NO");
                goto end;
            }
        }
        puts("YES");
        end:
        continue;
    }
}
