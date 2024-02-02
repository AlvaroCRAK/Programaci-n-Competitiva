#include <iostream>
int main(){
	int n;
	std::cin >> n;
	int mayor = n, i = 0;
	while(n != 1){
		if(n % 2 == 0) n /= 2;
		else n = n * 3 + 1;
		if(mayor < n) mayor = n;
		i++;
	}
	std::cout << i << " " << mayor;
}
