#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n = 0;
	int k = 0;
	cin >> n;
	cin >> k;

	if(k == 1) cout << 1 << '\n';
	else if(k % 2 or k == 0) {
		cout << 0 << '\n';
	}
	else if (n < 32) {
		uint32_t res = 0;
		// GEN SEQUENCE
		for(int i = 1; i < n; i++){
			uint32_t x = pow(2, i);
			if(k == x % 10) res++;
		}
		cout << res << '\n';
	} else {
		if(k == 6) {
			cout << (n - 1) / 4 << '\n';
		} else if(k == 4) {
			n % 4 == 3 ? cout << (n / 4) + 1 << '\n' : cout << n / 4 << '\n';
		} else if(k == 2){
			n  % 4 > 1 ? cout << (n / 4) + 1 << '\n' : cout << n / 4 << '\n';
		} else if (k == 8){
			 cout << n / 4 << '\n';
		}
	}
}
