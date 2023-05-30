#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int num_res = 1;
	uint64_t prime;

	cin >> prime;
	vector<uint64_t> res = {(prime + 1) / 2, (prime - 1) / 2};
	
	// 2 dá BO
	if(prime == 2) {
		cout << 0;
		return 0;
	}

	uint32_t s = sqrt(prime);
	if ((s * s) == prime) {
		num_res++;
	}

	cout << num_res << '\n';
	
	cout << res[0] << ' ' << res[1];

	if(num_res > 1){
		cout << '\n' <<  0 << ' ' << s;
	}

}
