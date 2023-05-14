#include <bits/stdc++.h>

using namespace std;

int main() {

	int fheight = 4;
	int n,h;
	cin >> n >> h;
	
	int lfloor,acc;
	n--;
	cin >> lfloor;
	
	while(n--){
		int floor;
		cin >> floor;
		acc += fheight * abs(lfloor - floor);
		lfloor = floor;
	}
	cout << acc << '\n';
}
