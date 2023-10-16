#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
int main()
{
	float R;
	float r;
	float x;
	float y;
	std::cin >> R;
	std::cin >> r;
	std::cin >> x;
	std::cin >> y;
	if ((x * x + y * y > r * r) and (x * x + y * y < R * R)) {
		std::cout << "TRUE" << std::endl;
	}
	else {
		std::cout << "FALSE" << std::endl;
	}
	return 0;
}
