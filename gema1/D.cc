#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> a = {0,0,0};
	cin >> a[0] >> a[1] >> a[2] ;
	std::sort(std::begin(a), std::end(a));
	cout << a[2] << '\n' << a[1] << '\n' << a[0] << '\n';
}
