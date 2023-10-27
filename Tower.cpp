#include <iostream>
#include <cmath>
int main() {
	int n;
	int kogda = 0;
	const double PI = 3.141592653589793;
	double accuracy;
	double ans = 0;
	int c = 1;
	int check = 1;
	std::cin >> n;
	std::cin >> accuracy;
	for (int i = 1; i <= n; ++i) {
		ans += check*(1.0 / c);
		c += 2;
		check = -check;
		kogda += 1;
		if (abs(PI - 4 * ans) < accuracy) {
			std::cout << kogda << std::endl;
			break;
		}
	}
	std::cout << 4*ans << std::endl;
	return 0;
}