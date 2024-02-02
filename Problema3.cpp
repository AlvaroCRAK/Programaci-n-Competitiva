#include <iostream>
int main(){
	std::string A, B;
	std::cin >> A >> B;
	int x, y;
	for(int i = 0; i < A.length(); i++){
		for(int j = 0; j < B.length(); j++){
			if(A[i] == B[j]){
				x = i;
				y = j;
				goto exit;
			}
		}
	}
	exit:
	for(int i = 0; i < B.length(); i++){
		for(int j = 0; j < A.length(); j++){
			if(x == j && y == i) std::cout << A[j];
			else if(j == x) std::cout << B[i];
			else if(i == y) std::cout << A[j];
			else std::cout << ".";			
		}
		std::cout << std::endl;
	}
}
