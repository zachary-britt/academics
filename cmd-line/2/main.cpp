#include <iostream>


int main() {
	unsigned u1 = 42, u2 = 10;
	std::cout << u1 - u2 << std::endl;
	std::cout << u2 - u1 << std::endl;

	int i = 10;

	std::cout << u2 - i << std::endl;
	std::cout << i - u2 << std::endl;

	return 0;
}