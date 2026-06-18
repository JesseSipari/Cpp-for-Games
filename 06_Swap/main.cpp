#include <iostream>


void swap(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

template <typename T>

void custom_swap(T& num1, T& num2)
{
	if (&num1 == &num2)
	{
		return;
	}

	T temp = num1;
	num1 = num2;
	num2 = temp;

	/*
	 * Note: In modern C++, you can also optimize the copies to moves:
	 * T temp = std::move(num1);
	 * num1 = std::move(num2);
	 * num2 = std::move(temp);
	 */


}


int main()
{
	int a{3};
	int b{ 5 };
	std::cout << "num1: " << a << " num2: " << b << '\n';
	swap(a, b);

	std::cout << "num1: " << a << " num2: " << b << '\n';

	std::cout << '\n';
	std::cout << "num1: " << a << " num2: " << b << '\n';
	custom_swap(a, b);
	std::cout << "num1: " << a << " num2: " << b << '\n';


	return 0;
}