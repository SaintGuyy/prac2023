#include <iostream>
#include <cmath>
int main() {
	int n;
	double ans = 0;
	int PowTwo = 1;
	std::cin >> n;
	for (int i = 1; i <= n; ++i) {
		ans += 1.0/PowTwo;
		PowTwo *= 2;
	}
	std::cout << ans << std::endl;
	return 0;
}
