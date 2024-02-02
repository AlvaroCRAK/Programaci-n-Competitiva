#include <iostream>
#include <cstdio>
int main(){
	int y, x;
	std::cin >> y >> x;
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			if(i % 2 == 0) printf("%2d ", i * x + 1 + j);
			else printf("%2d ",(i + 1) * x - j);
		}
		std::cout << std::endl;

	}
}
