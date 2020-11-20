#include <iostream> 
#include <iomanip> 
#include "fact.h" 
#include "sin.h" 
#include "soch.h" 

int main() {
	std::cout << "n" << "\t" << "n!\n";
	for (int n = 1; n <= 10; n++) {
		std::cout << n << "\t" << Fac(n) << "\n";
	}
	std::cout << "\n";

	float p = 3.1415;
	std::cout << "x" << "\t" << "sin(x)\n";
	for (float x = 0; x <= p / 4; x = x + p / 180) {
		std::cout << x << "\t" << std::setprecision(4) << Sin(x) << "\n";
	}
	std::cout << "\n";

	int n = 10;
	std::cout << "k" << "\t" << "c(k, 10)\n";
	for (int k = 1; k <= n; k++) {
		std::cout << k << "\t" << Soch(k, n) << "\n";
	}
}