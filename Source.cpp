#include <iostream>

int main()
{
	double a, b;

	std::cout << "Enter a: ";
	std::cin >> a;

	std::cout << "Enter b: ";
	std::cin >> b;

	std::cout << "Sum: " << sum(a, b) << "\n";
	std::cout << "Sub: " << sub(a, b) << "\n";

	return 0;
}
