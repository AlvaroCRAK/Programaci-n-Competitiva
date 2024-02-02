#include <iostream>
int main(){
	int y, x;
	std::cin >> y >> x;
	int matriz[y][x];
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			std::cin >> matriz[i][j];
		}
	}
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			int temp = 9;
			if(matriz[i][j] == 0){
				temp = 0;
				for(int a = -1; a < 2; a++){
					for(int b = -1; b < 2; b++){
						int m = i + a;
						int n = j + b;
						if(m >= 0 && m < y && n >= 0 && n < x && matriz[m][n] == 1)temp ++;
					}
				}
			}
			std::cout << temp << " ";
		}
		std::cout << std::endl;
	}
}
