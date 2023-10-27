#include <iostream>
#include <cmath>
int main() {
	int n;
	double ans = 0;
	std::cin >> n;
	for (int i = 1; i <= n; ++i) {
		ans += 1.0/i;
	}
	std::cout << ans << std::endl;
	return 0;
}
