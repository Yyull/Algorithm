#include <iostream>
#include <string>
using namespace std;

int main() {

	std::string line;

	for (int i = 0; i < 100; i++) {
		std::getline(std::cin, line);
		std::cout << line << "\n";
	}

	return 0;
}