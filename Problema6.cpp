#include <iostream>
int main(){
	int n; std::cin >> n;
	std::string x; std::cin >> x;
	int temp = 0;
	for(int i = 0; i < n; i += temp){
		std::cout << x[i];
		temp++;
	}
}
