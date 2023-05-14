#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int wsize = 0;
	cin >> wsize;

	string word; 
	word.reserve(wsize + 1);
	cin >> word;

	int res = 0;
	for(int i = 0; i < wsize; i++){
		if(word[(wsize - 1) - i] == word[i]) continue;
		word[(wsize - 1) - i] = word[i];
		res++;
	}
	cout << res << '\n';
}
