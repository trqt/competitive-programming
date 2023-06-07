#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    
    vector<int> how_many(n);
    vector<int> cashiers(n);

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        how_many[i] = k;
    }
    
    for(int i = 0; i < n; i++){
        int acc = 0;
        for(int j = 0; j < how_many[i]; j++){
            int t;
            cin >> t;
            acc += t * 5 + 15;
        }
        cashiers[i] = acc;
    }


    sort(cashiers.begin(), cashiers.end());
    cout << cashiers.at(0);
}
