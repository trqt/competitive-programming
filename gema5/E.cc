#include <bits/stdc++.h>

using namespace std;

int main() {

	// Fazendo parsers para o gema
	set<char> pp;
	string in;
	getline(cin, in);
	
	for(char &c : in){
		if(c == '{' || c == '}' || c == ',' || c == ' ') {
			//Consume
			continue;	
		} else {
			pp.insert(c);
		}
	}

	cout << pp.size() << '\n';
}