#include <iostream>

int getnum() {
	std::cout << "Enter how many uwus you want ";
	int x{};
	std::cin >> x;
	return x;
}


int main() {

	int x{ getnum() } ;
	
	std::cout << "you have " <<  x  << " uwus" << '\n';
	return 0;
}
