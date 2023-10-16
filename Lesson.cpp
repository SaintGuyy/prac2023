#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
int main()
{
	int a; 
	int b;
	int c;
	int d;
	float x;
	float y;
	int length1;
	int length2;
	float prop1;
	std::cin >> a; 
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> x;
	length1 = b - a;
	length2 = d - c;
	prop1 = (x - a) / length1;
	y = c + length2 * prop1;
	std::cout << y << std::endl;
	return 0;
}	