#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> camels(n);

    while(n--){
        int pos, dis;
        cin >> pos >> dis;

        camels.emplace_back(pos, pos+dis);
    }

    for(auto& c : camels){
        for(auto& c2 : camels){
            if(c.first == c2.second && c.second == c2.first && c != c2){
                cout << "YES" << '\n';
                return 0;
            }
        }
    }

    cout << "NO" << '\n';
}
