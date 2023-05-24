#include <bits/stdc++.h>

using namespace std;

int main() {

	array<int, 2> votes{};
	unordered_map<string, bool> persons;
	int n;
	cin >> n;
	
	while(n--){
		string p, day;
		int d;
		cin >> p >> day;

		if(day[0] == 'q') d = 0;
		else if(day[0] == 's') d = 1;
		if(!persons[p]) {
			votes[d]++;
			persons[p] = true;
		}
	}
	if(votes[0] > votes[1]){
			cout << "quarta" << '\n';
	}else if(votes[0] < votes[1]){
			cout << "sexta" << '\n';		
	}else{
		cout << "empate" << '\n';
	}
}
