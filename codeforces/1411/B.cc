#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--){
        uint64_t x;
        cin >> x;
        if(x < 10){
            cout << x << '\n'; 
            continue;
        }

        bool fair = false;
        while(!fair) {
            
            uint64_t f = x;

            while(f){
                int digit = f % 10;
                f /= 10;

                if(digit != 0 && x % digit != 0){
                    fair = false;
                    break;
                }
                fair = true;
            }

            x++;
        }

        cout << x-1 << '\n'; 
    }

    
}
