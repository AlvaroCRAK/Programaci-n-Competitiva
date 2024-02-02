#include <iostream>
int main(){
	int n;
	std::cin >> n;
	int matriz[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			std::cin >> matriz[i][j];
		}
	}
	int a = 0;
	for(int i = 0; i < n; i++){
		if(matriz[i][i] == matriz[i][n - 1 - i])a++;
	}
	if(a == n) std::cout << "Iguales";
	else std::cout << "No iguales";
}
