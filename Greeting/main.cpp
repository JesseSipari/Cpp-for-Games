#include <iostream>
#include <limits>
#include <format>

int main()
{
	std::string name;
	int age;

	std::cout << "Enter your name: ";
	std::cin >> name;


	while (true)
	{
		std::cout << "Enter your age: ";
		std::cin >> age;
		if (std::cin.fail())
		{
			std::cout << "ERROR: I expected a number." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if (age < 0)
		{
			std::cout << "Age cannot be negative!\n";
			continue;
		}
		
		break;
	}
	std::cout << std::format("Hello, {}. You are {} years old.", name, age); // std::format needs C++20 or newer


}