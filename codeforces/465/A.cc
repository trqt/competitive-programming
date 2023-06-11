#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string num;
    cin >> num;

    int i = 0;
    for(; num[i] != '0'; i++){
        if(i == num.size()) break;
    };

    cout << (i+1 > n ? n : i+1);
}
