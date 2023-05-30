#include <bits/stdc++.h>

using namespace std;

int main() {
	stack<bool> paran;
	bool special = false;

	string in;
	cin >>  in;
	
	for(char &c : in){
		if(c == ')' && paran.empty()) {
			special = true;
			break;
		}
		else if(c == '('){
			paran.push(true);
		}else if(c == ')'){
			paran.pop();
		}
	}

	if(paran.empty() && !special) cout << "YES\n";
	else cout << "NO\n";
}