#include <bits/stdc++.h>

using namespace std;

int main() {

	unordered_map<string, int> db;
	int n;
	cin >> n;
	
	while(n--){
		string name;
		cin >> name;

		if(db[name] == 0){
			cout << "OK" << '\n';
			db[name]++;
			continue;
		}

		cout << name << db[name]++ << '\n';
	}
}
