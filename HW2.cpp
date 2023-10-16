#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
int main()
{
	float a;
	float b;
	float c;
	float D = 0;
	float x1 = 0;
	float x2 = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a == 0.0) {
		std::cout << "ERROR" << std::endl;
	}
	else {
		if ((b * b - 4 * a * c) < 0) {
			std::cout << "ERROR" << std::endl;
		}
		else {
			D = b * b - 4 * a * c;
			x1 = (-b + sqrt(D)) / 2 * a;
			x2 = (-b - sqrt(D)) / 2 * a;
			std::cout << x1 << std::endl;
			std::cout << x2 << std::endl;
		}
	}

	return 0;
}