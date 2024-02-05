#include <iostream>
#include <vector>
int main(){
	int con; std::cin >> con;
	while(con-- > 0){
		int n; std::cin >> n;
		int x[n];
		for(int i = 0; i < n; i++)
			std::cin >> x[i];
		std::vector<int> y = {x[0]};
		for(int i = 1; i < n; i++){
			if(x[i-1] > x[i]){
				y.push_back(x[i]);
				y.push_back(x[i]);
			}
			else y.push_back(x[i]);
		}
		std::cout << y.size() << '\n';
		for(int i : y)
			std::cout << i << ' ';
		std::cout << std::endl;
	}
}



