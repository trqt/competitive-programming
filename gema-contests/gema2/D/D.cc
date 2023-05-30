#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n_of_n = 0;
	cin >> n_of_n;

	
	int res = 0;
	int null = 0;
	for(int i = 0; i < n_of_n; i++) {
		cin >> null; 
		if(null % 2 == 0) res++;
	}

	cout << res << '\n';
}
