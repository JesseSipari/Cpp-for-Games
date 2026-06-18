#include <iostream>



int main()
{
	double d = 42.99;
	float f = static_cast<float>(d);
	int i = static_cast<int>(f);
	char c = static_cast<char>(i);
	bool b = static_cast<bool>(c);

	std::cout << d << "\n"; 
	std::cout << f << "\n";
	std::cout << i << "\n";
	std::cout << c << "\n";
	std::cout << b << "\n";

	return 0;
}