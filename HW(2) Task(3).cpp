#include <iostream>
#include <cmath>
int main() {
	int n;
	double x;
	double ans = 0;
	std::cin >> n;
	std::cin >> x;
	for (int i = 1; i <= n; ++i) {
		ans += std::sin(x);
		x = ans;
	}
	std::cout << ans << std::endl;
	return 0;
}
