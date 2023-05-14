#include <bits/stdc++.h>

using namespace std;

int main() {
	stack<bool> paran;
	stack<bool> square;
	stack<bool> curly;
	bool special = false;

	string in;
	int n;
	cin >> n;
	cin >> in;
	in.reserve(n);
	
	for(char &c : in){
		if(c == ')' && paran.empty()) {
			special = true;
			break;
		} else if(c == ']' && square.empty()) {
			special = true;
			break;
		} else if(c == '}' && curly.empty()) {
			special = true;
			break;
		} else {
			switch (c) {
      		case '(':
					paran.push(true);
				  break;
					case '[':
					square.push(true);
				  break;
					case '{':
					curly.push(true);
				  break;
					case ')':
					paran.pop();
				  break;
					case ']':
					square.pop();
				  break;
					case '}':
					curly.pop();
				  break;
      }
		}
	}

	if(paran.empty() && square.empty() && curly.empty() && !special) cout << "COMPLETINHA\n";
	else cout << "DEU RUIM\n";
}