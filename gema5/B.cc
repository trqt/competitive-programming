#include <bits/stdc++.h>

using namespace std;

int main() {

	int w,h;
	cin >> h >> w;

	char board[h][w];

	for(int i = 0;i<h;i++){
		for(int j = 0;j<w;j++){
			cin >> board[i][j];
		}
	}	

	for(int i = 0;i<h;i++){
		for(int j = 0;j<w;j++){
			switch(board[i][j]){
				case 'D':
					// Marca todos os na coluna apos D como parade
					for(int i2 = i;i2<h;i2++){
					  auto& cur = board[i2][j];
						if(cur == '#') break;
						// Só pinta posições do jogador
						else if(cur == '.') cur = '*';
					}
				break;
			 	case 'U':
					// Marca todos os na coluna apos U como parade
					for(int i2 = i;i2>=0;i2--){
						auto& cur = board[i2][j];
						if(cur == '#') break;
						// Só pinta posições do jogador
						else if(cur == '.') cur = '*';
					}
				break;
				case 'R':
					
					// Marca todos os na coluna apos R como parade
					for(int j2 = j;j2<w;j2++){
						auto& cur = board[i][j2];
						if(cur == '#') break;
						// Só pinta posições do jogador
						else if(cur == '.') cur = '*';
					}				
				break;
				case 'L':
					
					// Marca todos os na coluna apos L como parade
					for(int j2 = j;j2>=0;j2--){
						auto& cur = board[i][j2];
						if(cur == '#') break;
						// Só pinta posições do jogador
						else if(cur == '.') cur = '*';
					}
				break;
			}
		}
	}

	int acc = 0;
	for(int i = 0; i<h;i++){
		for(int j = 0;j<w;j++){
			// Early return on acc to multiple solutions
			if(board[i][j] == '.' && acc > 0){
				acc++;
				break;
			}else if(board[i][j] == '.') acc++;
		}
	}
	
	if(acc == 1){
		cout << "ONLY ONE SOLUTION\n";
	} else if(acc > 1){
		cout << "MULTIPLE SOLUTIONS\n";
	} 
	else if(acc < 1){
		cout << "NO SOLUTION\n";
	}
}
